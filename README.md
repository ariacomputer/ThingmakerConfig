# ThingmakerConfig
This repository contains Marlin Firmware configuration files for the Thingmaker™.

## Current Printer Setup
* Ender 5 Pro
* BIGTREETECH SKR Mini E3 V2.0
* BLTouch v3.1
* TFT35 display
* Marlin v2.0.7.2

## Other Changes Needed
* marlin\src\hal\stm32f1\inc\sanitycheck.h: Comment out line 52: #error "NEOPIXEL_LED (Adafruit NeoPixel) is not supported for HAL/STM32F1. Comment out this line to proceed at your own risk!"