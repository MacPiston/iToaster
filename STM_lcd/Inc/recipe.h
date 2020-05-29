//
// Created by Maciej Zajecki on 29/05/2020.
//

#ifndef STM_LCD_RECIPE_H
#define STM_LCD_RECIPE_H

#define MAX_RECIPES 30
#define DEFINED_RECIPES

struct Recipe {
    char* name;
    int time1;
    int time2;
    int time3;
};

extern struct Recipe recipes_array[];

#endif //STM_LCD_RECIPE_H
