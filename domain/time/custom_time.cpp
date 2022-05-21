//
// Created by 최은기 on 2022/05/21.
//

#include "custom_time.h"

using namespace std;


std::string custom_time::toString() {
    string hour = to_string(this->hour);
    string minutes = to_string(this->minutes);
    return hour + ":" + minutes;
}

custom_time custom_time::operator+(custom_time &c) {
    int n_min = this->minutes+c.minutes;
    int n_hour = this->hour + c.hour;
    if (n_min >= 60) {
        n_hour++;
        n_min -= 60;
    }

    if (n_hour >= 24) {
        n_hour -= 24;
    }

    return custom_time(this->hour+c.hour, this->minutes+c.minutes);
}

custom_time::custom_time(int hour, int minutes) {
    this->hour = hour;
    this->minutes = minutes;
}
