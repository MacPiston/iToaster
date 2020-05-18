#ifndef RECIPES_H
#define RECIPES_H
#include "Arduino.h"

class BaseRecipe {
public:
    String recipeName;
    short int toastTime;
    BaseRecipe(String newName, int newTime) {
        this->recipeName = newName;
        this->toastTime = newTime;
    }
};

#endif