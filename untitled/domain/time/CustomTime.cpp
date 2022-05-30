//
// Created by 최은기 on 2022/05/21.
//

#include "CustomTime.h"

using namespace std;


std::string CustomTime::toString() {
    string hour = to_string(this->hour);
    string minutes = to_string(this->minutes);
    return hour + ":" + minutes;
}

CustomTime CustomTime::operator+(CustomTime &c) {
    int n_min = this->minutes+c.minutes;
    int n_hour = this->hour + c.hour;
    if (n_min >= 60) {
        n_hour++;
        n_min -= 60;
    }

    if (n_hour >= 24) {
        n_hour -= 24;
    }

    return CustomTime(this->hour + c.hour, this->minutes + c.minutes);
}

CustomTime::CustomTime(int hour, int minutes) {
    this->hour = hour;
    this->minutes = minutes;
}
