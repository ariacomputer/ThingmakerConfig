# ThingmakerConfig
This repository contains configuration files for Thingmaker™.

## Current Printer Setup
### Hardware
* Ender 5 Pro
* Micro-Swiss Direct Drive Extruder and All Metal Hotend
* BIGTREETECH SKR Mini E3 V2.0
* BLTouch v3.1
* Creality 12864 OEM LCD screen and encoder

### Software
* klipper v0.9.1-445 (running on a RPi 4)
* moonraker v0.6.0-11
* Fluidd v1.12.2

## Usage
* Install Git: 

    ```shell
    sudo apt install git -y
    ```

* Download and install [KIAUH](https://github.com/th33xitus/kiauh): 

    ```shell
    cd ~
    git clone git@github.com:th33xitus/kiauh.git
    ./kiauh/kiauh.sh
    ```

* Install Klipper, Moonraker and Fluidd.
* Download this repo:

    ```shell
    cd ~
    git clone git@github.com:ariacomputer/ThingmakerConfig.git
    ```

* Copy `moonraker.conf` and `printer.cfg` from the ThingmakerConfig directory to `~/klipper_config`, overwriting the existing files.
* Restart Moonraker and Klipper (this can be done from Fluidd).

### Older Marlin Setup
Before the switch in April 2021 to klipper, Thingmaker ran Marlin 2.0.7.2, bugfix release.  The files are still available in the `Marlin` directory if a rollback is ever needed.  

The configuration in the Marlin directory is currently out of date, as it was written when the TFT35 was installed.  
In addition, the Marlin source file `marlin\src\hal\stm32f1\inc\sanitycheck.h` must have line 52 commented out:

```cplusplus
#error "NEOPIXEL_LED (Adafruit NeoPixel) is not supported for HAL/STM32F1. Comment out this line to proceed at your own risk!"
```

## Links
* [KIAUH](https://github.com/th33xitus/kiauh)
* [Klipper](https://github.com/KevinOConnor/klipper)
* [Moonraker](https://github.com/Arksine/moonraker)
* [Fluidd](https://github.com/cadriel/fluidd)