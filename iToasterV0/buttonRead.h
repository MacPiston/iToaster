#ifndef BUTTONREAD_H
#define BUTTONREAD_H
#include "Arduino.h"

class buttonReader {
    int lastRead;
public:
    int readAnalog(int analogPin);
};

int buttonReader::readAnalog(int analogPin) {
  delay(20);
  adc_key_in = analogRead(analogPin); 
  delay(20);
  if (adc_key_in > 1000 and lastRead != btnNONE) { 
      lastRead = btnNONE;
      return btnNONE; 
  }
  if (adc_key_in < 50 and lastRead != btnRIGHT) { 
      lastRead = btnRIGHT;
      return btnRIGHT;
  }
  if (adc_key_in < 250 and lastRead != btnUP) { 
      lastRead = btnUP;
      return btnUP;
  }
  if (adc_key_in < 450 and lastRead != btnDOWN) { 
      lastRead = btnDOWN;
      return btnDOWN;
  }
  if (adc_key_in < 650 and lastRead != btnLEFT) { 
      lastRead = btnLEFT;
      return btnLEFT;
  }
  if (adc_key_in < 850 and lastRead != btnSELECT) {
      lastRead = btnSELECT;
      return btnSELECT;
  }
  return btnNONE;
};

#endif
