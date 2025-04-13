/*
i2cdetect.h - Arduino library for scanning I2C bus for devices
*/

#ifndef _I2CDETECT_H_
#define _I2CDETECT_H_

#include <Wire.h>

void i2cdetect(uint8_t first, uint8_t last, TwoWire &wire);
void i2cdetect(TwoWire &wire);

#endif
