k8remote
========

infrared remote for the k8 LED club, reverse engineered to work on an arduino

For Uno:
- Download Arduino IDE, open k8remote.ino
- compile and load sketch. The IR LED should be in pin 8.

For Gemma:
- Download Arduino IDE from https://learn.adafruit.com/adafruit-arduino-ide-setup/arduino-1-dot-6-x-ide
- cry because the irremote library doesnt like to compile with that version of arduino (complains about missing definitions)
- TODO: find out if this works with the latest winavr
