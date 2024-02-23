#include "TFT_eSPI.h"
#include "lvgl.h"
#include "ui.h"
#include "esp_now.h"
#include "WiFi.h"
#include "FS.h"
#include "SD.h"
#include "SPI.h"
#include "NTC_TERMISTOR.h"

#define BUZZER_PIN              18
#define LED_BTN_BLUE            20   // I/O 18 same buzzer pin
#define LED_BTN_YELLOW          19
#define SCREEN_WIDTH            320
#define SCREEN_HEIGHT           240
#define LENGTH_OFF_MACADDRS     6
#define BAUD_RATE               115200
#define ARRAY                   1000    // change variable to CHART_ARRAY

int buzzer_device_count = 0;
uint8_t macParts[6];         // Each part of the MAC Address is 2 characters
String recv_num_node = "node: ";
String recv_temperature_message = "00.0";
String device_mac_address = "";

// All MAC Address
uint8_t master_address[6] = {0x34, 0x85, 0x18, 0xB1, 0x62, 0xEC};
uint8_t mac_addr_node_1[6] = {0x4C, 0x11, 0xAE, 0xE2, 0x53, 0x48};
uint8_t mac_addr_node_2[6] = {0xC8, 0xF0, 0x9E, 0x9C, 0x80, 0x1C};
uint8_t mac_addr_node_3[6] = {0x94, 0xB9, 0x7E, 0xE4, 0x93, 0xB4};
uint8_t mac_addr_node_4[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
uint8_t mac_addr_node_5[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

unsigned long previousMillis = 0;
const long interval = 10000; // 10 seconds
TFT_eSPI tft = TFT_eSPI();               // TFT instance
lv_disp_drv_t disp_drv;                  // LVGL display driver instance
static lv_disp_draw_buf_t draw_buf;      // LVGL buffer
static lv_color_t buf[SCREEN_WIDTH * 10]; // LVGL buffer array

char temperature_message_char[5];
typedef struct struct_message
{
  String num_node;
  float temperature_data;
  int fact_new_route;

} struct_message;

// Create a struct_message called myData
struct_message my_message;
// Create a Struct_message to hold data
struct_message receive_message;

struct_message route_message;

esp_now_peer_info_t peerInfo;

void createDir(fs::FS &fs, const char * path){
  Serial.printf("Creating Dir: %s\n", path);
  if(fs.mkdir(path)){
    Serial.println("Dir created");
  } else {
    Serial.println("mkdir failed");
  }
}

void writeFile(fs::FS &fs, const char * path, const char * message){
  Serial.printf("Writing file: %s\n", path);

  File file = fs.open(path, FILE_WRITE);
  if(!file){
    Serial.println("Failed to open file for writing");
    return;
  }
  if(file.print(message)){
    Serial.println("File written");
  } else {
    Serial.println("Write failed");
  }
  file.close();
}

void appendFile(fs::FS &fs, const char * path, const char * message){
  Serial.printf("Appending to file: %s\n", path);

  File file = fs.open(path, FILE_APPEND);
  if(!file){
    Serial.println("Failed to open file for appending");
    return;
  }
  if(file.print(message)){
    Serial.println("Message appended");
  } else {
    Serial.println("Append failed");
  }
  file.close();
}
// LVGL flush callback function
void my_disp_flush(lv_disp_drv_t *disp_drv, const lv_area_t *area, lv_color_t *color_p)
{
  uint32_t w = area->x2 - area->x1 + 1;
  uint32_t h = area->y2 - area->y1 + 1;

  tft.startWrite();
  tft.setAddrWindow(area->x1, area->y1, w, h);
  tft.pushColors((uint16_t *)color_p, w * h, true);
  tft.endWrite();

  lv_disp_flush_ready(disp_drv);
}

void convertStringToMacAddress(String message)
{
  // Split the MAC Address string into individual parts
  sscanf(message.c_str(), "%2X:%2X:%2X:%2X:%2X:%2X",
         &macParts[0], &macParts[1], &macParts[2],
         &macParts[3], &macParts[4], &macParts[5]);

  if (macParts[3] == mac_addr_node_1[3] && macParts[4] == mac_addr_node_1[4] && macParts[5] == mac_addr_node_1[5])
  {
    my_message.num_node = "node:1";
  }
  else if (macParts[3] == mac_addr_node_2[3] && macParts[4] == mac_addr_node_2[4] && macParts[5] == mac_addr_node_2[5])
  {
    my_message.num_node = "node:2";
  }
  else if (macParts[3] == mac_addr_node_3[3] && macParts[4] == mac_addr_node_3[4] && macParts[5] == mac_addr_node_3[5])
  {
    my_message.num_node = "node:3";
  }
}

void config_peer_esp_now(const uint8_t *macAddress)
{
  memcpy(peerInfo.peer_addr, macAddress, 6);
  peerInfo.channel = 0;
  peerInfo.encrypt = false;
}

void find_new_route()
{
  if (my_message.num_node == "node:1")
  {
    config_peer_esp_now(mac_addr_node_1);
    if (esp_now_add_peer(&peerInfo) != ESP_OK)
    {
      Serial.println("Failed to add peer");
      return;
    }
    if (esp_now_send(mac_addr_node_1, (uint8_t *)&my_message, sizeof(my_message)) == ESP_OK)
    {
      Serial.println("ESP-fine_new_route -> Send to mac_addr_node_2");
      digitalWrite(LED_BTN_YELLOW, HIGH);
      digitalWrite(LED_BTN_BLUE, LOW);
    }
    else
    {
      digitalWrite(LED_BTN_BLUE, HIGH);
      digitalWrite(LED_BTN_YELLOW, LOW);
      Serial.println("ESP-fine_new_route -> Can't Send to mac_addr_node_2");
    }
  }
}

// Callback when data is sent
void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status)
{

  if (status == ESP_NOW_SEND_SUCCESS)
  {
    Serial.println("ESP_SEND_DATA_COMPLETE");
    digitalWrite(LED_BTN_YELLOW, HIGH);
    digitalWrite(LED_BTN_BLUE, LOW);
  }
  if (status == ESP_NOW_SEND_FAIL)
  {
    Serial.println("ESP_CAN'T_SEND_DATA_COMPLETE");
    digitalWrite(LED_BTN_BLUE, HIGH);
   digitalWrite(LED_BTN_YELLOW, LOW);
    find_new_route();
  }
}

// Callback when data is received
void OnDataRecv(const uint8_t *mac, const uint8_t *incomingData, int len)
{
  memcpy(&receive_message, incomingData, sizeof(receive_message));
  route_message.num_node = receive_message.num_node;
  route_message.temperature_data = receive_message.temperature_data;

  config_peer_esp_now(master_address);
  if (esp_now_add_peer(&peerInfo) == ESP_OK)
  {
    if (esp_now_send(mac_addr_node_1, (uint8_t *)&my_message, sizeof(my_message)) == ESP_OK)
    {

      digitalWrite(LED_BTN_YELLOW, HIGH);
      digitalWrite(LED_BTN_BLUE, LOW);
    }
    else
    {
      Serial.println("ESP-route_message fail");
      digitalWrite(LED_BTN_BLUE, HIGH);
      digitalWrite(LED_BTN_YELLOW, LOW);
    }
  }
}

void setup()
{
  // Initialize LVGL
  lv_init();

  // Initialize LVGL display driver
  lv_disp_drv_init(&disp_drv);
  disp_drv.hor_res = SCREEN_WIDTH;
  disp_drv.ver_res = SCREEN_HEIGHT;
  disp_drv.flush_cb = my_disp_flush;
  lv_disp_drv_register(&disp_drv);

  // Initialize LVGL buffer
  lv_disp_draw_buf_init(&draw_buf, buf, NULL, SCREEN_WIDTH * 10);
  disp_drv.draw_buf = &draw_buf;

  // Call UI initialization function
  ui_init();

  // config adc mode and pin
  adc_config();

  Serial.begin(BAUD_RATE);

  pinMode(LED_BTN_BLUE, OUTPUT);
  pinMode(LED_BTN_YELLOW, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);          

  // Set device as a Wi-Fi Station
  WiFi.mode(WIFI_STA);
  device_mac_address = WiFi.macAddress();
  convertStringToMacAddress(device_mac_address);

  // Init ESP-NOW
  if (esp_now_init() != ESP_OK)
  {
    Serial.println("Error initializing ESP-NOW");
    return;
  }

  // Once ESPNow is successfully Init, we will register for Send CB to
  // get the status of Trasnmitted packet
  esp_now_register_send_cb(OnDataSent);

  // Register peer
  config_peer_esp_now(master_address);
  if (esp_now_add_peer(&peerInfo) != ESP_OK)
  {
    Serial.println("Failed to add peer");
    return;
  }
  // Register for a callback function that will be called when data is received
  esp_now_register_recv_cb(OnDataRecv);

  if(!SD.begin(5)){
    Serial.println("Card Mount Failed");
    return;
  }
  uint8_t cardType = SD.cardType();

  if(cardType == CARD_NONE){
    Serial.println("No SD card attached");
    return;
  }
  // Initialize TFT display
  tft.begin();
  tft.setRotation(3); // Adjust rotation as needed

  

}

void set_value(){
  char temp_t[10];
  static int count_position_array;
  static lv_coord_t ui_Chart1_series_1_array[ARRAY];
  lv_chart_series_t * ui_Chart1_series_1 = lv_chart_add_series(ui_Chart1, lv_color_hex(0x808080),LV_CHART_AXIS_PRIMARY_Y);

    lv_arc_set_value(ui_Arc1,my_message.temperature_data);
    sprintf(temp_t,"%.1f°C",my_message.temperature_data);
    lv_label_set_text(ui_Label2,temp_t);
    if (count_position_array <= ARRAY - 1)
    {
      count_position_array++;
      ui_Chart1_series_1_array[count_position_array] = get_termistor_temperature();
      lv_chart_set_point_count(ui_Chart1, count_position_array);
      // // lv_chart_set_axis_tick(ui_Chart1, LV_CHART_AXIS_PRIMARY_X, 2, 1, 1000, 10, false, 20);
      lv_chart_set_ext_y_array(ui_Chart1, ui_Chart1_series_1, ui_Chart1_series_1_array);
    }
    else
    {
      count_position_array = 0;
    }
}

void loop()
{

  
  unsigned long currentMillis = millis();
  if (buzzer_device_count >= 9)
  {
    digitalWrite(BUZZER_PIN, HIGH);
  }
  // Check if 10 seconds have passed
  if (currentMillis - previousMillis >= interval)
  {
    // Save the last time a new message was sent
    previousMillis = currentMillis;

    
    // Update the temperature data
    my_message.temperature_data = get_termistor_temperature();
    

    // Display information in Serial Monitor
    Serial.print("new_route: ");
    Serial.println(my_message.fact_new_route);
    Serial.print("num-node: ");
    Serial.println(my_message.num_node);
    Serial.print("temperature: ");
    Serial.println(my_message.temperature_data);

    // Send message via ESP-NOW
    esp_err_t result = esp_now_send(master_address, (uint8_t *)&my_message, sizeof(my_message));
    set_value();
    // lv_chart_set_point_count(ui_Chart1, count_position_array);
    // lv_chart_set_ext_y_array(ui_Chart1, ui_Chart1_series_1, ui_Chart1_series_1_array);

  }
  // Handle LVGL tasks
  lv_task_handler();
  delay(5); // Adjust delay as needed
}
