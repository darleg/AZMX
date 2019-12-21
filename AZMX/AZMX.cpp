#include "AZMX.h"

int main() {
    AZ.baud(115200);
    i2c = new DevI2C(D14, D15);
    sensor = new HTS221Sensor(*i2c);
    // init the sensor
    sensor -> init(NULL);

    while(1) {
        // enable
        sensor -> enable();

        // read id
        sensor -> readId(&id);
        AZ.printf("ID: %d\r\n", id);
        led1 = !led1;
        wait_ms(200);

        // get humidity
        sensor -> getHumidity(&humidity);
        AZ.printf("Humidity: %.2f\r\n", humidity);
        led2 = !led2;
        wait_ms(200);
        RB = humidity;
        LEDB = RB/100;
    
        // get temperature 
        sensor -> getTemperature(&temperature);
        AZ.printf("Temperature: %.2f\r\n", temperature);
        led3 = !led3;
        wait_ms(200);
        RR = temperature;
        LEDR = RR/100;
    
        // disable the sensor
        sensor -> disable();
        // reset
        sensor -> reset();
        wait(5);
    }
}