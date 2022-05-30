#include "Output.h"
#include "iostream"

using namespace std;

void Output::printTimeResult() {
    printLine();
    cout << "some result" << endl;
    printLine();

}

void Output::printLine() {
    cout << "-------------------" << endl;
}
