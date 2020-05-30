//
// Created by Maciej Zajecki on 29/05/2020.
//
#include "ssd1306.h"
#include "recipe.h"
#include "ssd1306_fonts.h"
#include <stdio.h>

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

void oledmenu_display_lvls(int line, int selected_lvl) {
    switch (selected_lvl) {
        case 0: // LOW selected
            ssd1306_SetCursor(11, line - 5);
            ssd1306_WriteString("Low", Font_11x18, text);
            ssd1306_SetCursor(52, line);
            ssd1306_WriteString("Med.", Font_7x10, text);
            ssd1306_SetCursor(87, line);
            ssd1306_WriteString("High", Font_7x10, text);
            break;

        case 1: // MED selected
            ssd1306_SetCursor(15, line);
            ssd1306_WriteString("Low", Font_7x10, text);
            ssd1306_SetCursor(45, line - 5);
            ssd1306_WriteString("Med.", Font_11x18, text);
            ssd1306_SetCursor(87, line);
            ssd1306_WriteString("High", Font_7x10, text);
            break;

        case 2: // HIGH selected
            ssd1306_SetCursor(15, line);
            ssd1306_WriteString("Low", Font_7x10, text);
            ssd1306_SetCursor(50, line);
            ssd1306_WriteString("Med.", Font_7x10, text);
            ssd1306_SetCursor(76, line - 5);
            ssd1306_WriteString("High", Font_11x18, text);
            break;

        default:
            break;
    }

}

void oledmenu_display_confirm_screen(int recipe_index, int selected_lvl2) {
    struct Recipe selected_recipe = recipes_array[recipe_index];
    char selected_recipe_time[6];

    ssd1306_Fill(background);
    ssd1306_SetCursor(2, 4);
    ssd1306_WriteString("Confirm selection:", Font_7x10, text);
    ssd1306_SetCursor(20, 19);
    ssd1306_WriteString(selected_recipe.name, Font_11x18, text);
    ssd1306_SetCursor(10, 43);
    switch (selected_lvl2) {
        case 0:
            ssd1306_WriteString("Low", Font_11x18, text);
            sprintf(selected_recipe_time, "%u%c", selected_recipe.time1, 's');
            break;
        case 1:
            ssd1306_WriteString("Med.", Font_11x18, text);
            sprintf(selected_recipe_time, "%u%c", selected_recipe.time2, 's');
            break;
        case 2:
            ssd1306_WriteString("High", Font_11x18, text);
            sprintf(selected_recipe_time, "%u%c", selected_recipe.time3, 's');
            break;
        default:
            break;
    }
    ssd1306_SetCursor(83, 43);
    ssd1306_WriteString(selected_recipe_time, Font_11x18, text);
    ssd1306_SetCursor(55, 43);
    ssd1306_WriteString(">>", Font_11x18, text);

    ssd1306_UpdateScreen();
}

void oledmenu_display_recipe(int recipe_index, int selected_lvl, int selected_lvl2) {
    /*
     * Selection levels:
     * 0 - main screen; selecting recipe
     * 1 - main screen; selecting time (baking level)
     */
    struct Recipe selected_recipe = recipes_array[recipe_index];

    ssd1306_Fill(background); // displaying arrows on current selecion
    switch (selected_lvl) {
        case 0:
            oledmenu_display_arrows(19);
            break;
        case 1:
            oledmenu_display_arrows(45);
            break;
        default:
            break;
    }

    switch (selected_lvl2) { // displaying according baking lvlvs  current selection
        case 0:
            oledmenu_display_lvls(50, 0);
            break;
        case 1:
            oledmenu_display_lvls(50, 1);
            break;
        case 2:
            oledmenu_display_lvls(50, 2);
            break;
        default:
            break;
    }

    ssd1306_SetCursor(12, 4);
    ssd1306_WriteString("Select recipe:", Font_7x10, text);
    ssd1306_SetCursor(20, 19);
    ssd1306_WriteString(selected_recipe.name, Font_11x18, text);

    ssd1306_UpdateScreen();
}
