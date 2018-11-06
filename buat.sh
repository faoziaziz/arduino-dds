#!/bin/sh
arduino-cli compile --fqbn arduino:avr:uno ../arduino-dds
arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:avr:uno ../arduino-dds
