#include <Arduino.h>
#include "config.h"
#include "readButton.h"

void setup() {
    lcd.begin(16, 2);
    pinMode(10, OUTPUT);

    BaseRecipe pszenna("przenna", 75);
    BaseRecipe gorski("gorski", 100);

    l1c1.add_variable(pszenna.recipeName);
    l1c2.add_variable(gorski.time);
    menu.add_screen(recipes1);
    menu.update();
}

void loop() {
    if (Buttons.readAnalog(A0) == btnRIGHT) {
        menu.next_screen();
    }
    if (Buttons.readAnalog(A0) == btnLEFT) {
        menu.previous_screen();
    }
}