#include "NTC_TERMISTOR.h"
#include "Arduino.h"
#include <driver/adc.h>

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
    float thermistor_resistance[NUM_VALUE_READING] = {0};
    float therm_res_ln[NUM_VALUE_READING] = {0};
    float temperature_celsius[NUM_VALUE_READING] = {0};
    for (int i = 0; i < NUM_VALUE_READING; i++)
    {
        adc_val[i] = adc1_get_raw(ADC1_CHANNEL_6);
        output_voltage_buff[i] = ((adc_val[i] * VOLTAGE) / BIT_RESOLUTION);
        thermistor_resistance[i] = ((VOLTAGE * (10.0 / output_voltage_buff[i])) - 10) * NTC_TERMISTOR_RESISTANCE; /* Resistance in ohms   */
        therm_res_ln[i] = log(thermistor_resistance[i]);
        temperature_celsius[i] = (1 / (0.001129148 + (0.000234125 * therm_res_ln[i]) + (0.0000000876741 * therm_res_ln[i] * therm_res_ln[i] * therm_res_ln[i]))) - CONVERT_CELSIUS; /* Temperature in Kelvin */ /* Temperature in degree Celsius */
        temperature_val += temperature_celsius[i];
    }
    temperature_val /= NUM_VALUE_READING;
    return temperature_val;
}
