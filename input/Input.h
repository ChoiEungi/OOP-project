#ifndef OOP_PROJECT_INPUT_H
#define OOP_PROJECT_INPUT_H


class Input {
private:
    static void printNumberSelectionDirection();
    static void printLine();
    static const char* numberToTransportation(int selectionNumber);

public:
    static int inputSelectionNumber();
    static void startInstruction();
    static void timeSelectInstruction(int selectionNumber);
};


#endif //OOP_PROJECT_INPUT_H
