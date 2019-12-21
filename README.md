# Get started
This is the get started example of build a MXChip IoT DevKit App by using mbed cli.

1. Install [mbed CLI](https://os.mbed.com/docs/v5.10/tutorials/quick-start-offline.html) if you didn't have it on your machine.

   *The mbed CLI requires Python 2.7, please make sure you have installed the right version*

2. Clone the code:

   ```
   git clone https://github.com/VSChina/devkit-mbedos5-getstarted --recursive
   cd devkit-mbedos5-getstarted
   ```

3. Compile:

   ```mbed compile```

4. Upload to [MXChip IoT DevKit](aka.ms/iot-devkit):

   - Connect the [MXChip IoT DevKit](aka.ms/iot-devkit) with your machine via USB.
   - You can find a removable USB Mass Storage disk named **AZ3166**.
   - Copy the ```.\BUILD\AZ3166\GCC_ARM\devkit-mbedos5-getstarted.bin``` into this disk.
   - The [MXChip IoT DevKit](aka.ms/iot-devkit) will reboot after finished the copy and run the new application.

