//
// Created by Maciej Zajecki on 18/05/2020.
//

#ifndef ITOASTER_CONFIG_H
#define ITOASTER_CONFIG_H
#include <LiquidMenu.h>
#include <LiquidCrystal.h>
#include "baserecipe.h"

//LCD Configuration
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

//Recipes


//Menu structure
LiquidLine l1c1(1, 0);
LiquidLine l1c2(1, 1);
LiquidScreen recipes1(l1c1, l1c2);

LiquidMenu menu(lcd);

#endif //ITOASTER_CONFIG_H