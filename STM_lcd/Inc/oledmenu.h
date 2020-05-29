//
// Created by Maciej Zajecki on 29/05/2020.
//

#ifndef STM_LCD_OLEDMENU_H
#define STM_LCD_OLEDMENU_H

void oledmenu_display_splash();

void oledmenu_display_recipe(int recipe_index);

void oledmanu_display_times(int recipe_index); // You need to manually clear screen before calling

void oledmenu_display_arrows(int line); // You need to manually clear screen before calling

#endif //STM_LCD_OLEDMENU_H
