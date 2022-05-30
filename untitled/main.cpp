#include <iostream>
#include "input/Input.h"

int main() {
    int inputSelectionNumber;
    Input::startInstruction();
    inputSelectionNumber = Input::inputSelectionNumber();
    Input::timeSelectInstruction(inputSelectionNumber);
    return 0;
}
