//
// Created by Maciej Zajecki on 18/05/2020.
//

#ifndef ITOASTER_BASERECIPE_H
#define ITOASTER_BASERECIPE_H

class BaseRecipe {
public:
    int time;
    const char* recipeName;
    void make() {

    }

    const char* getName() {
        return recipeName;
    }

    BaseRecipe(const char* newName, int newTime) {
        this->recipeName = newName;
        this->time = newTime;
    }
};

#endif //ITOASTER_BASERECIPE_H
