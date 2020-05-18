#ifndef CONFIG_H
#define CONFIG_H
#include "Arduino.h"

//LCD Setup:
const byte LCD_RS = 8;
const byte LCD_EN = 9;
const byte LCD_D4 = 4;
const byte LCD_D5 = 5;
const byte LCD_D6 = 6;
const byte LCD_D7 = 7;
LiquidCrystal lcd(LCD_RS, LCD_EN, LCD_D4, LCD_D5, LCD_D6, LCD_D7);

//Buttons Setup:
const short int analogButtons = A0;
int adc_key_in = 0;
#define btnRIGHT  0
#define btnUP     1
#define btnDOWN   2
#define btnLEFT   3
#define btnSELECT 4
#define btnNONE   5

//Relays/Thermocouples Setup:
const short int heater = 2;
const short int fan = 3;
const short int thermal = A1;

//Recipes
BaseRecipe recipe1("pierwszy", 60);
BaseRecipe recipe2("drugi", 75);

//Menu Setup
LiquidLine line1(1, 0, recipe1.recipeName);
LiquidLine line2(1, 1, recipe2.recipeName);
LiquidScreen mainScreen;
LiquidMenu menu(lcd);

#endif