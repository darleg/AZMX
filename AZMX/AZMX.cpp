#include "AZMX.h"

int main() {
    AZ.baud(115200);
    i2c = new DevI2C(D14, D15);
    HTSensor = new HTS221Sensor(*i2c);
    LPSensor = new LPS22HBSensor(*i2c);
    DispOled = new Display();

    
    // init the sensor
    HTSensor -> init(NULL);
    LPSensor -> init(NULL);
    // OLED Display
    DispOled -> init();
    char oledbuf[100];
    sprintf(oledbuf, "Hi there");
    DispOled -> ShowString(oledbuf);

    while(1) {
        // enable
        HTSensor -> enable();
        
        // read id
        HTSensor -> readId(&id);
        AZ.printf("ID: %d\r\n", id);
        led1 = !led1;
        wait_ms(200);

        // get humidity
        HTSensor -> getHumidity(&humidity);
        AZ.printf("Humidity: %.2f\r\n", humidity);
        led2 = !led2;
        wait_ms(200);
        RB = humidity;
        LEDB = RB/100;
    
        // get temperature 
        HTSensor -> getTemperature(&temperature);
        AZ.printf("Temperature: %.2f\r\n", temperature);
        led3 = !led3;
        wait_ms(200);
        RR = temperature;
        LEDR = RR/100;

        // get pressure
        LPSensor -> getPressure(&pressure);
        AZ.printf("Pressure: %.2f\r\n", pressure);
        
        // disable the sensor
        HTSensor -> disable();
        
        // reset
        HTSensor -> reset();
        DispOled -> DisplayOn();
        wait(5);
        DispOled -> DisplayOff();
    }
}