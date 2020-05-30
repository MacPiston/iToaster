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
    ssd1306_SetCursor(2, line);
    ssd1306_WriteChar('<', Font_11x18, text);
    ssd1306_SetCursor(116, line);
    ssd1306_WriteChar('>', Font_11x18, text);
}

void oledmanu_display_lvls(int line) {
    ssd1306_SetCursor(15, line);
    ssd1306_WriteString("Low", Font_7x10, text);
    ssd1306_SetCursor(45, line - 5);
    ssd1306_WriteString("Med", Font_11x18, text);
    ssd1306_SetCursor(87, line);
    ssd1306_WriteString("High", Font_7x10, text);
}

void oledmenu_display_recipe(int recipe_index, int selectable) {
    struct Recipe selected_recipe = recipes_array[recipe_index];

    ssd1306_Fill(background);
    switch (selectable) {
        case 0:
            oledmenu_display_arrows(19);
            break;
        case 1:
            oledmenu_display_arrows(45);
            break;
        default:
            break;
    }
    oledmanu_display_lvls(50);

    ssd1306_SetCursor(12, 4);
    ssd1306_WriteString("Select recipe:", Font_7x10, text);
    ssd1306_SetCursor(20, 19);
    ssd1306_WriteString(selected_recipe.name, Font_11x18, text);

    ssd1306_UpdateScreen();
}
