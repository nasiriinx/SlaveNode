#ifndef NTC_TERMISTOR_H_
#define NTC_TERMISTOR_H_

#define ADC_PIN                         34
#define VOLTAGE                         3.3
#define BIT_RESOLUTION                  4096
#define NTC_TERMISTOR_RESISTANCE        980
#define CONVERT_CELSIUS                 273.15
#define NUM_VALUE_READING               100

void adc_config();
float get_termistor_temperature();

#endif