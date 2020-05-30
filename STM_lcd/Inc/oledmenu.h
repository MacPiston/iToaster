//
// Created by Maciej Zajecki on 29/05/2020.
//

#ifndef STM_LCD_OLEDMENU_H
#define STM_LCD_OLEDMENU_H

void oledmenu_display_splash();

void oledmenu_display_recipe(int recipe_index, int selectable);

void oledmanu_display_lvls(int line); // You need to manually clear&update screen

void oledmenu_display_arrows(int line); // You need to manually clear&update screen

#endif //STM_LCD_OLEDMENU_H
