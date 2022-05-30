#ifndef OOP_PROJECT_CUSTOM_TIME_H
#define OOP_PROJECT_CUSTOM_TIME_H
#include <string>

class CustomTime {

private:
    int hour;
    int minutes;
public:
    CustomTime(int hour, int minutes);
    std::string toString();
    CustomTime operator+(CustomTime& c);
};



#endif //OOP_PROJECT_CUSTOM_TIME_H
