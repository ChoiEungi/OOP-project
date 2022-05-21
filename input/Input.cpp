#include "Input.h"
#include "iostream"
#include "time.h"
using namespace std;


int Input::inputSelectionNumber() {
    printNumberSelectionDirection();
    int inputNumber;
    cin >> inputNumber;
    return inputNumber;
}

void Input::startInstruction(){
    string busInstruction("1. BUS(U-sqaure)");
    string KTXInstruction("2. TRAIN(KTX: Gwangju-Songjeong Station)");
    string airplaneInstruction("3. Airplane(Gwangju Airport)");

    printLine();
    cout << "What will you take to go to your home?" << endl;
    cout << busInstruction << endl;
    cout << KTXInstruction << endl;
    cout << airplaneInstruction << endl;
    printLine();
}

void Input::timeSelectInstruction(int selectionNumber) {
    string timeString;

    cout << "When is the departure time of the ";
    cout << numberToTransportation(selectionNumber) << "?" << "(ex. 16:30)" << endl;
    cout << "Enter the Time: ";
    cin >> timeString;
    cout <<timeString << endl;
}

void Input::printNumberSelectionDirection() {
    cout << "Select the Number : ";
}

void Input::printLine(){
    cout << "---------------------------------------------------------" << endl;
}

const char *Input::numberToTransportation(int selectionNumber) {
    switch (selectionNumber) {
        case 1:
            return "BUS";
        case 2:
            return "KTX";
        case 3:
            return "Airplane";
        default:
            return "none";
    }
}

int Input::inputSelectionPoint() {
    printNumberSelectionTime();
    int inputNumber;
    cin >> inputNumber;
    return inputNumber;
}

void Input::leaveTimeInstruction(int selectionNumber) {
    cout<<"When will you take a City Bus from GIST?"<<endl;
    cout<<"1. Now" << endl;
    cout<<"2. Later" << endl;
    printLine();
}

void Input::printNumberSelectionTime() {
    cout << "Select the Number : ";
}


void Input::pickTimeCalculation(int selectionNumber) {
    if(selectionNumber==1){
        cout<<"--not yet--"<<endl;
    }
    else if(selectionNumber==2){
        timeSelectInstruction(selectionNumber);
    }
    printLine();
}





