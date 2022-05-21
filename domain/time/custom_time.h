#ifndef OOP_PROJECT_CUSTOM_TIME_H
#define OOP_PROJECT_CUSTOM_TIME_H
#include <string>

class custom_time {

private:
    int hour;
    int minutes;
public:
    custom_time(int hour, int minutes);
    std::string toString();
    custom_time operator+(custom_time& c);
};



#endif //OOP_PROJECT_CUSTOM_TIME_H
