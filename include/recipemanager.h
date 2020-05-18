//
// Created by Maciej Zajecki on 18/05/2020.
//
/*
#ifndef ITOASTER_RECIPEMANAGER_H
#define ITOASTER_RECIPEMANAGER_H

class RecipeManager {
private:
    int quantity = 0;
    BaseRecipe* pHead = nullptr;
    BaseRecipe* first = pHead;
public:
    void addRecipe(String name, int time);
    String* getRecipeNames();
    int getQuantity();
};

RecipeManager recipes;

void RecipeManager::addRecipe(String name, int time) {
    if (quantity == 0) {
        pHead = new BaseRecipe(name, time);
    } else {
        first = pHead;
        while (pHead->pNext) {
            pHead = pHead->pNext;
        }
        pHead->pNext = new BaseRecipe(name, time);
        pHead = first;
    }
}

String *RecipeManager::getRecipeNames() {
    String* names = new String[quantity];
    first = pHead;
    int counter = 0;
    while (counter != (quantity - 1) and pHead) {
        names[counter] = pHead->getName();
        pHead = pHead->pNext;
    }
    pHead = first;
    return names;
}

int RecipeManager::getQuantity() {
    return quantity;
}


#endif //ITOASTER_RECIPEMANAGER_H
*/