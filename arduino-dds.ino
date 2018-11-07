/*
  filename  : arduino-dds.ino
  deskripsi : ini untuk mengakses AD9910
*/

#include "support.h"
#include <SPI.h>

int ss=10;
int del=200;

void setup()
{
	pinMode(ss, OUTPUT);
	SPI.begin();
	SPI.setBitOrder(MSBFIRST);
	
	}
	
void setValue(int value)
{
	digitalWrite(ss, LOW);
	SPI.transfer(0);
	SPI.transfer(value);
	digitalWrite(ss, HIGH);
	
	}
void loop()
{
	for (int a=0; a<256; a++)
	{
		setValue(a);
		delay(del);
		}
	for (int a=255; a>=0; --a)
	{
		setValue(a);
		delay(del);
		}
	}
