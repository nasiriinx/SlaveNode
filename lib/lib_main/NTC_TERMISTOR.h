#ifndef NTC_TERMISTOR_H_
#define NTC_TERMISTOR_H_

#define ADC_PIN                         34
#define VOLTAGE                         3.3
#define BIT_RESOLUTION                  4095
#define NTC_TERMISTOR_RESISTANCE        10000
#define CONVERT_CELSIUS                 273.15
#define NUM_VALUE_READING               50

void adc_config();
float get_termistor_temperature();
float read_temp();

#endif