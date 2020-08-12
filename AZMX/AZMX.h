#include "mbed.h"
#include "./OnBoard/Classes/HTS221Sensor.h"
#include "./OnBoard/Classes/LPS22HBSensor.h"
#include "Display.h"

DigitalOut led1(LED1);
DigitalOut led2(LED2);
DigitalOut led3(LED3);

PwmOut LEDR(RGB_R);
PwmOut LEDG(RGB_G);
PwmOut LEDB(RGB_B);

float RR, RG, RB;

DevI2C *i2c;
HTS221Sensor *HTSensor;
LPS22HBSensor *LPSensor;
Display *DispOled;

float humidity = 0;
float temperature = 0;
float pressure = 0;
unsigned char id;

Serial AZ(PA_11, PA_12); // tx, rx