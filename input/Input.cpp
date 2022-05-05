#include "Input.h"
#include "iostream"

using namespace std;

int Input::inputSelectionNumber() {
    printNumberSelectionDirection();
    int inputNumber;
    cin >> inputNumber;
    return inputNumber;
}

void Input::printNumberSelectionDirection() {
    printLine();

    printLine();
    cout << "Select the Number : ";

}

void Input::printLine(){
    cout << "-------------------" << endl;
}






