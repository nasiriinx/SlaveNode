#include "NTC_TERMISTOR.h"
#include "Arduino.h"
#include <driver/adc.h>

#define THERMISTORNOMINAL 10000     
#define TEMPERATURENOMINAL 25  
#define BCOEFFICIENT 3950
#define SERIESRESISTOR 10000   
    

int adc_val[NUM_VALUE_READING];
float output_voltage_buff[NUM_VALUE_READING];


void adc_config()
{
    adc1_config_width(ADC_WIDTH_BIT_12);
    adc1_config_channel_atten(ADC1_CHANNEL_4, ADC_ATTEN_DB_11);
}

float get_termistor_temperature()
{
    
    float temperature_val = 0.0;
    float temp_adc = 0.0;
    float thermistor_resistance[NUM_VALUE_READING] = {0};
    float therm_res_ln[NUM_VALUE_READING] = {0};

    for (int i = 0; i < NUM_VALUE_READING; i++)
    {
        adc_val[i] = analogRead(ADC_PIN);
        output_voltage_buff[i] = ((adc_val[i] * VOLTAGE) / BIT_RESOLUTION);
        thermistor_resistance[i] = ((VOLTAGE * (10.0 / output_voltage_buff[i])) - 10) * NTC_TERMISTOR_RESISTANCE; /* Resistance in ohms   */
        therm_res_ln[i] = log(thermistor_resistance[i]);
        temp_adc += therm_res_ln[i];
    }
    temp_adc /= NUM_VALUE_READING;

    temperature_val = (1 / (0.001129148 + (0.000234125 * temp_adc) + (0.0000000876741 * temp_adc * temp_adc * temp_adc))) - CONVERT_CELSIUS; /* Temperature in degree Celsius */
    temperature_val *= -1;
    return temperature_val;
}

