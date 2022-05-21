#ifndef OOP_PROJECT_INPUT_H
#define OOP_PROJECT_INPUT_H


class Input {
private:
    static void printNumberSelectionDirection();
    static void printNumberSelectionTime();
    static void printLine();
    static const char* numberToTransportation(int selectionNumber);

public:
    static int inputSelectionNumber();
    static int inputSelectionPoint();
    static void startInstruction();
    static void leaveTimeInstruction(int selectionNumber);
    static void pickTimeCalculation(int selectionNumber);
    static void timeSelectInstruction(int selectionNumber);

};


#endif //OOP_PROJECT_INPUT_H