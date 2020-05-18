//
// Created by Maciej Zajecki on 18/05/2020.
//

#ifndef ITOASTER_READBUTTON_H
#define ITOASTER_READBUTTON_H

int adc_key_input = 0;
#define btnRIGHT  0
#define btnUP     1
#define btnDOWN   2
#define btnLEFT   3
#define btnSELECT 4
#define btnNONE   5

class readButton {
private:
    int lastRead;
public:
    int readAnalog(int analogPin);
};

readButton Buttons;

int readButton::readAnalog(int analogPin) {
    delay(50);
    adc_key_input = analogRead(analogPin);
    delay(50);
    if (adc_key_input > 1000) return btnNONE;
    if (adc_key_input < 50)   return btnRIGHT;
    if (adc_key_input < 250)  return btnUP;
    if (adc_key_input < 450)  return btnDOWN;
    if (adc_key_input < 650)  return btnLEFT;
    if (adc_key_input < 850)  return btnSELECT;
    return -1;
}

#endif //ITOASTER_READBUTTON_H
