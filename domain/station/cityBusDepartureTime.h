//
// Created by suyeo on 2022-05-21.
//

#ifndef OOP_PROJECT_CITYBUSDEPARTURETIME_H
#define OOP_PROJECT_CITYBUSDEPARTURETIME_H
#include<iostream>
#include <string>
#include <array>
using namespace std;
class busSixteen{
public:
    //(매월16, 대창운수->매월동)
    int bustSixteenHourWeek[55] = {5,6,6,6,7,7,7,7,7,8,8,8,9,9,10,10,10,11,11,11,12,12,12,13,13,13,14,14,14,15,15,15,16,16,16,16,17,17,17,17,18,18,18,18,19,19,20,20,20,21,21,21,22,22};
    int bustSixteenMinWeek[55] = {40,05,25,45,00,13,26,40,55,12,30,50,145,40,05,30,50,10,30,50,10,30,50,10,30,50,10,30,50,10,30,50,05,20,35,50,05,20,34,47,00,15,35,58,20,40,00,20,40,00,20,40,00,20};
    int busSixteenHourWeekend[45] = {5,6,6,6,7,7,7,8,8,8,9,9,10,10,11,11,12,12,12,13,13,14,14,15,15,15,16,16,16,17,17,17,18,18,19,19,19,20,20,21,21,21,22,22};
    int busSixteenMinWeekend[45] = {40,05,30,55,15,33,51,9,30,55,23,51,19,47,15,43,8,33,58,23,48,13,38,03,26,49,12,35,55,15,35,55,17,40,05,30,55,20,40,00,20,40,00,20};

};

class busFiftyOne{

};
class busThirty{

};
class busNine{

};
class busThirtyThree{

};


//배차표 데이터 입력,,,,



#endif //OOP_PROJECT_CITYBUSDEPARTURETIME_H
