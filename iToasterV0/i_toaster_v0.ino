#include "LiquidMenu.h"
#include <LiquidCrystal.h>
#include "recipes.h"
#include "config.h"
#include "buttonRead.h"

//iToaster V0
//By MacPiston® 2020

buttonReader analogReader;

void setup() {
  lcd.begin(16, 2);
  mainScreen.add_line(line1);
  mainScreen.add_line(line2);
  menu.add_screen(mainScreen);
  menu.update();
}

void loop() {
  if (analogReader.readAnalog(analogButtons) == btnRIGHT) menu.next_screen();
  if (analogReader.readAnalog(analogButtons) == btnLEFT) menu.previous_screen();
}
