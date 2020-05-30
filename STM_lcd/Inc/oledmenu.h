//
// Created by Maciej Zajecki on 29/05/2020.
//

#ifndef STM_LCD_OLEDMENU_H
#define STM_LCD_OLEDMENU_H

void oledmenu_display_splash();

void oledmenu_display_recipe(int recipe_index, int selected_lvl, int selected_lvl2); // recipe/time selection screen

void oledmenu_display_lvls(int line, int selected_lvl); // You need to manually clear&update screen

void oledmenu_display_arrows(int line); // You need to manually clear&update screen

void oledmenu_display_confirm_screen(int recipe_index, int selected_lvl2); // baking confirmation screen

#endif //STM_LCD_OLEDMENU_H
