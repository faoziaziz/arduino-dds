/*
  filename  : arduino-dds.ino
  deskripsi : ini untuk mengakses AD9910
*/

#include "support.h"

Test tes;
void setup() {
  pinMode(tes.pinBlink, OUTPUT);
}

void loop() {
  digitalWrite(tes.pinBlink, HIGH);
  delay(500);
  digitalWrite(tes.pinBlink, LOW);
  delay(500);
}
