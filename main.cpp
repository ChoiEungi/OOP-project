#include <iostream>
#include "input/Input.h"

using namespace std;

int main() {
    int inputSelectionNumber;
    int inputSelectionTime;
    Input::startInstruction();
    inputSelectionNumber = Input::inputSelectionNumber();
    Input::leaveTimeInstruction(inputSelectionNumber);
    inputSelectionTime = Input::inputSelectionPoint();
    Input::pickTimeCalculation(inputSelectionTime);
    //Input::timeSelectInstruction(inputSelectionTime);



    return 0;
}
