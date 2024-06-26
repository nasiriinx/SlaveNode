<<<<<<< HEAD
#include "TFT_eSPI.h"
#include "lvgl.h"
#include "ui.h"
#include "esp_now.h"
#include "esp_wifi.h"
#include "WiFi.h"
#include "NTC_TERMISTOR.h"
  
#define LENGTH_OF_MACADDRS              6
#define NUM_OF_MACADDRS                 4
#define BUZZZER                         18   
#define BAUD_RATE                       115200
#define lvgl
//#define chart
#define debug
#define debug2
#define SCREEN_WIDTH                    320
#define SCREEN_HEIGHT                   240

int node_peer = 0;
// WiFi credentials
const char WIFI_SSID[] = "test";
int connector_master_node = 0;
uint8_t macParts[6]; // Each part of the MAC Address is 2 characters
int fact_nw = 0;
uint8_t mac_addr_device[6][LENGTH_OF_MACADDRS] = {{0x34, 0x85, 0x18, 0xB1, 0x62, 0xEC},
                                                  {0xE4, 0x65, 0xB8, 0x74, 0x3A, 0xCC},
                                                  {0xE4, 0x65, 0xB8, 0x74, 0x67, 0xB8},
                                                  {0xE4, 0x65, 0xB8, 0x74, 0x1C, 0x5C},               
                                                  {0xe4, 0x65, 0xb8, 0x74, 0x68, 0x4c},
                                                  {0xB4, 0xE6, 0x2D, 0xA6, 0xF7, 0xF9}};
                                                  

uint8_t task_sender_addr_device_node1[NUM_OF_MACADDRS - 1][LENGTH_OF_MACADDRS] = {{0x34, 0x85, 0x18, 0xB1, 0x62, 0xEC},  // master addr
                                                                                  {0xE4, 0x65, 0xB8, 0x74, 0x1C, 0x5C},
                                                                                  {0xE4, 0x65, 0xB8, 0x74, 0x67, 0xB8}}; // node3 addr

uint8_t task_sender_addr_device_node2[NUM_OF_MACADDRS - 1][LENGTH_OF_MACADDRS] = {{0x34, 0x85, 0x18, 0xB1, 0x62, 0xEC},  // master addr
                                                                                  {0xE4, 0x65, 0xB8, 0x74, 0x3A, 0xCC},  // node1 addr
                                                                                  {0xE4, 0x65, 0xB8, 0x74, 0x1C, 0x5C}}; // node3 addr

uint8_t task_sender_addr_device_node3[NUM_OF_MACADDRS - 1][LENGTH_OF_MACADDRS] = {{0x34, 0x85, 0x18, 0xB1, 0x62, 0xEC},  // master addr
                                                                                  {0xE4, 0x65, 0xB8, 0x74, 0x3A, 0xCC},  // node1 addr
                                                                                  {0xE4, 0x65, 0xB8, 0x74, 0x67, 0xB8}};

uint8_t task_sender_addr_device_node4[NUM_OF_MACADDRS - 1][LENGTH_OF_MACADDRS] = {{0x34, 0x85, 0x18, 0xB1, 0x62, 0xEC},  // master addr
                                                                                  {0xE4, 0x65, 0xB8, 0x74, 0x3A, 0xCC},  // node1 addr
                                                                                  {0xE4, 0x65, 0xB8, 0x74, 0x1C, 0x5C}}; // node3 addr

uint8_t task_sender_addr_device_node5[NUM_OF_MACADDRS - 1][LENGTH_OF_MACADDRS] = {{0x34, 0x85, 0x18, 0xB1, 0x62, 0xEC},  // master addr
                                                                                  {0xE4, 0x65, 0xB8, 0x74, 0x3A, 0xCC},  // node1 addr
                                                                                  {0xE4, 0x65, 0xB8, 0x74, 0x67, 0xB8}}; // node2 addr

unsigned long previousMillis = 0;
const long interval = 10000;  // 10 seconds

char temperature_message_char[5];
typedef struct struct_message
{
  String num_node;
  float temperature_data;
  int fact_new_route;
 
} struct_message;
 
// Create a struct_message called myData
struct_message send_message;
// Create a Struct_message to hold data
struct_message receive_message;
 
struct_message route_message;
 
esp_now_peer_info_t peerInfo;

#ifdef lvgl
TFT_eSPI tft = TFT_eSPI();               // TFT instance
lv_disp_drv_t disp_drv;                  // LVGL display driver instance
static lv_disp_draw_buf_t draw_buf;      // LVGL buffer
static lv_color_t buf[SCREEN_WIDTH * 10]; // LVGL buffer array

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
#endif
int32_t getWiFiChannel(const char *ssid) {
  if (int32_t n = WiFi.scanNetworks()) {
      for (uint8_t i=0; i<n; i++) {
          if (!strcmp(ssid, WiFi.SSID(i).c_str())) {
              return WiFi.channel(i);
          }
      }
  }
  return 0;
}

void convertStringToMacAddress(String message)
{
  // Split the MAC Address string into individual parts
  sscanf(message.c_str(), "%2X:%2X:%2X:%2X:%2X:%2X",
         &macParts[0], &macParts[1], &macParts[2],
         &macParts[3], &macParts[4], &macParts[5]);

  if (macParts[3] == mac_addr_device[1][3] && macParts[4] == mac_addr_device[1][4] && macParts[5] == mac_addr_device[1][5])
  {
    send_message.num_node = "node:1";
    #ifdef lvgl
    lv_label_set_text(ui_dev_name_t, "Device 1");
    #endif
  }
  else if (macParts[3] == mac_addr_device[2][3] && macParts[4] == mac_addr_device[2][4] && macParts[5] == mac_addr_device[2][5])
  {
    send_message.num_node = "node:2";
    #ifdef lvgl
    lv_label_set_text(ui_dev_name_t, "Device 2");
    #endif
  }
  else if (macParts[3] == mac_addr_device[3][3] && macParts[4] == mac_addr_device[3][4] && macParts[5] == mac_addr_device[3][5])
  {
    send_message.num_node = "node:3";
    #ifdef lvgl
    lv_label_set_text(ui_dev_name_t, "Device 3");
    #endif
  }
  // else if (macParts[3] == mac_addr_device[4][3] && macParts[4] == mac_addr_device[4][4] && macParts[5] == mac_addr_device[4][5])
  // {
  //   send_message.num_node = "node:4";
  //   #ifdef lvgl
  //   lv_label_set_text(ui_dev_name_t, "Device 4");
  //   #endif
  // }
  // else if (macParts[3] == mac_addr_device[5][3] && macParts[4] == mac_addr_device[5][4] && macParts[5] == mac_addr_device[5][5])
  // {
  //   send_message.num_node = "node:5";
  //   #ifdef lvgl
  //   lv_label_set_text(ui_dev_name_t, "Device 5");
  //   #endif
  // }
  else {

  }
}

void config_peer_esp_now(const uint8_t *macAddress)
{
  memcpy(peerInfo.peer_addr, macAddress, 6);
  peerInfo.channel = 0;
  peerInfo.encrypt = false;
  connector_master_node = 1;  
}

void find_new_route()
{
  static int i;
  static int buzzer_count;
  unsigned long currentMillis2 = millis();
  if (send_message.num_node == "node:1")
  {
    if (node_peer == 0)
    {
      for (i = 1; i < NUM_OF_MACADDRS - 2; i++)
      {
        config_peer_esp_now(task_sender_addr_device_node1[i]);
        esp_err_t result = esp_now_add_peer(&peerInfo);
        if (result == ESP_OK)
        {
#ifdef debug
          Serial.print("add peer OK: ");
          Serial.println(i);
#endif
          node_peer = 1;
          break;
        }
        else
        {
#ifdef debug
          Serial.println("Failed to add peer");
#endif
          node_peer = 0;
          i = 0;
        }
      }
    }
    esp_now_send(task_sender_addr_device_node1[i], (uint8_t *)&send_message, sizeof(send_message));
  }
  if (send_message.num_node == "node:2")
  {
    if (node_peer == 0)
    {
      for (i = 1; i < NUM_OF_MACADDRS - 1; i++)
      {
        config_peer_esp_now(task_sender_addr_device_node3[i]);
        esp_err_t result = esp_now_add_peer(&peerInfo);
        if (result == ESP_OK)
        {
#ifdef debug
          Serial.print("add peer OK: ");
          Serial.println(i);
#endif
          node_peer = 1;
          break;
        }
        else
        {
#ifdef debug
          Serial.println("Failed to add peer");
#endif
          node_peer = 0;
          i = 0;
        }
      }
    }
    esp_now_send(task_sender_addr_device_node3[i], (uint8_t *)&send_message, sizeof(send_message));
  }
  if (send_message.num_node == "node:3")
  {
    if (node_peer == 0)
    {
      for (i = 1; i < NUM_OF_MACADDRS - 1; i++)
      {
        config_peer_esp_now(task_sender_addr_device_node3[i]);
        esp_err_t result = esp_now_add_peer(&peerInfo);
        if (result == ESP_OK)
        {
#ifdef debug
          Serial.print("add peer OK: ");
#endif
          node_peer = 1;
          break;
        }
        else
        {
#ifdef debug
          Serial.println("Failed to add peer");
#endif
          node_peer = 0;
          i = 0;
        }
      }
    }
    esp_now_send(task_sender_addr_device_node3[i], (uint8_t *)&send_message, sizeof(send_message));
  }
  fact_nw = 1;
  delay(10);
}

// Callback when data is sent
void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) 
{
  if (status == ESP_NOW_SEND_SUCCESS)
  {
    tone(BUZZZER, 5000); // เล่นเสียงความถี่ 1000Hz บนขาที่กำหนด
    delay(10);
    #ifdef debug2
    Serial.println("ESP_SEND_DATA_COMPLETE");
    #endif
    
  }
  if(status == ESP_NOW_SEND_FAIL)
  {
    #ifdef debug2
    //Serial.println("ESP_CAN'T_SEND_DATA_COMPLETE -> find new route");
    #endif
    send_message.fact_new_route = 1;
    delay(10);
    if(fact_nw == 0)
    {
      find_new_route();
    }
  }
  noTone(BUZZZER); // หยุดเล่นเสียง
}
 
// Callback when data is received
void OnDataRecv(const uint8_t *mac, const uint8_t *incomingData, int len)
{
  memcpy(&receive_message, incomingData, sizeof(receive_message));
  char recv_num_node[7] = "";
  char recv_temperature_message[6] = "";
  route_message.num_node = receive_message.num_node;
  route_message.temperature_data = receive_message.temperature_data;
  #ifdef debug2
  Serial.print("num-node: ");
  Serial.println(route_message.num_node);
  Serial.print("temperature: ");
  Serial.println(route_message.temperature_data);
  #endif

  if (connector_master_node == 1)
  {
    config_peer_esp_now(mac_addr_device[0]);
    connector_master_node = 0;
    esp_err_t result = esp_now_add_peer(&peerInfo);
    if (result == ESP_OK)
    {
       #ifdef debug
      Serial.println("add peer OK write sheet");
      #endif
    }
    else
    {
       #ifdef debug
      Serial.println("Failed to add peer");
      #endif
    }
  }
  if (esp_now_send(mac_addr_device[0], (uint8_t *)&route_message, sizeof(route_message)) == ESP_OK)
  {
    #ifdef debug
    Serial.println("Route_succes");
    #endif
  }
}

void init_sender_esp_now() 
{
  WiFi.mode(WIFI_STA);
  String device_mac_address = WiFi.macAddress();
  convertStringToMacAddress(device_mac_address);
  int32_t channel = getWiFiChannel(WIFI_SSID);
  esp_wifi_set_channel(channel, WIFI_SECOND_CHAN_NONE);
  // Init ESP-NOW
  if (esp_now_init() != ESP_OK) {
    #ifdef debug
    Serial.println("There was an error initializing ESP-NOW");
    #endif
  }

  esp_now_register_send_cb(OnDataSent);
  // Register peer
  config_peer_esp_now(mac_addr_device[0]);
  connector_master_node = 0;
}

void init_recever_esp_now()
{

  if (esp_now_add_peer(&peerInfo) != ESP_OK)
  {
    #ifdef debug
    Serial.println("Failed to add peer");
    #endif

  }
  // Register for a callback function that will be called when data is received
  esp_now_register_recv_cb(OnDataRecv);
}

void setup()
{
  //int fact_master = 0;
  // config adc mode and p
  Serial.begin(BAUD_RATE);
  pinMode(BUZZZER, OUTPUT); // กำหนดขาของ buzzer เป็น output

#ifdef lvgl
  // Initialize TFT display
  tft.begin();
  tft.setRotation(3); // Adjust rotation as needed

  // Initialize LVGL
  lv_init();
  lv_disp_draw_buf_init(&draw_buf, buf, NULL, SCREEN_WIDTH * 10);
  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv);
  disp_drv.hor_res = SCREEN_WIDTH;
  disp_drv.ver_res = SCREEN_HEIGHT;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.draw_buf = &draw_buf;
  lv_disp_drv_register(&disp_drv);
  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv);
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  lv_indev_drv_register(&indev_drv);
  // Call UI initialization function
  ui_init();
#endif

  init_sender_esp_now();
  init_recever_esp_now();
  delay(1000);

}
void loop()
{
  char temp_t[10] = "";
  unsigned long currentMillis = millis();
#ifdef chart
  // static int count_position_array;
  // static lv_coord_t ui_Chart1_series_1_array[ARRAY];
#endif
  // if (currentMillis - previousMillis >= interval)
  // {
    
  //   previousMillis = currentMillis;
    int32_t channel = getWiFiChannel(WIFI_SSID);
    esp_wifi_set_channel(channel, WIFI_SECOND_CHAN_NONE);
    send_message.temperature_data = get_termistor_temperature();
#ifdef debug2
    Serial.print("new_route: ");
    Serial.println(send_message.fact_new_route);
    Serial.print("num-node: ");
    Serial.println(send_message.num_node);
    Serial.print("temperature: ");
    Serial.println(send_message.temperature_data);
#endif
 
#ifdef lvgl
    sprintf(temp_t, "%.1f", send_message.temperature_data);
    lv_label_set_text(ui_temp_t, temp_t);
    lv_bar_set_value(ui_bar, send_message.temperature_data, LV_ANIM_ON);
#endif
#ifdef chart
    lv_chart_series_t *ui_Chart1_series_1 = lv_chart_add_series(ui_Chart1, lv_color_hex(0x00FFFF), LV_CHART_AXIS_PRIMARY_Y);
    if (count_position_array <= ARRAY - 1)
    {
      count_position_array++;
      ui_Chart1_series_1_array[count_position_array] = send_message.temperature_data;
      lv_chart_set_point_count(ui_Chart1, count_position_array);
      lv_chart_set_ext_y_array(ui_Chart1, ui_Chart1_series_1, ui_Chart1_series_1_array);
    }
    if (count_position_array >= ARRAY - 1)
    {
      count_position_array = 0;
    }
#endif

    if (connector_master_node == 1)
    {
      config_peer_esp_now(mac_addr_device[0]);
      connector_master_node = 0;
    }
    
    esp_err_t result = esp_now_send(mac_addr_device[0], (uint8_t *)&send_message, sizeof(send_message));
    
    if (result == ESP_OK)
    {
      send_message.fact_new_route = 0;
      Serial.println("send");
    }
  //}
  fact_nw = 0;
#ifdef lvgl    
  lv_task_handler();
#endif
delay(10000);
}
=======
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
>>>>>>> de6793528c1a5617cd571390f88dff0579b7874f
