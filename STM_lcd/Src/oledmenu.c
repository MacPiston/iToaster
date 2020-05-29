//
// Created by Maciej Zajecki on 29/05/2020.
//
#include "ssd1306.h"
#include "recipe.h"
#include "ssd1306_fonts.h"
#define background White
#define text Black

void oledmenu_display_splash() {
    ssd1306_Fill(background);
    ssd1306_SetCursor(0, 0);
    ssd1306_WriteString("iToaster", Font_11x18, text);
    ssd1306_SetCursor(100, 5);
    ssd1306_WriteString("v1.0", Font_6x8, text);
    ssd1306_UpdateScreen();
}

void oledmenu_display_arrows(int line) {
    ssd1306_SetCursor(4, line);
    ssd1306_WriteChar('<', Font_11x18, text);
    ssd1306_SetCursor(113, line);
    ssd1306_WriteChar('>', Font_11x18, text);
}

void oledmenu_display_recipe(int recipe_index) {
    struct Recipe selected_recipe = recipes_array[recipe_index];
    ssd1306_Fill(background);
    oledmenu_display_arrows(19);
    ssd1306_SetCursor(12, 4);
    ssd1306_WriteString("Select recipe:", Font_7x10, text);
    ssd1306_SetCursor(20, 19);
    ssd1306_WriteString(selected_recipe.name, Font_11x18, text);


    ssd1306_UpdateScreen();
}

void oledmanu_display_times(int recipe_index) {
    struct Recipe selected_recipe = recipes_array[recipe_index];

}