#include "Destination.cpp"

class ExpressBus : public Destination {
public:
    void initBusInfoList(){
        vector<CustomTime> songjungTime;
        songjungTime = vector<CustomTime>();
        initsongjungTime(songjungTime);

        this->busInfoList.addBusInfo(BusInfo("송정33", songjungTime, "과기원역", 44));
    }
private:
    void initsongjungTime(vector<CustomTime> songjungTime);
    void initxx(vector<CustomTime> songjungTime);
};


void ExpressBus::initsongjungTime(vector<CustomTime> songjungTime) {
    int size = 55;
    int bustSixteenHourWeek[55] = {5,6,6,6,7,7,7,7,7,8,8,8,9,9,10,10,10,11,11,11,12,12,12,13,13,13,14,14,14,15,15,15,16,16,16,16,17,17,17,17,18,18,18,18,19,19,20,20,20,21,21,21,22,22};
    int bustSixteenMinWeek[55] = {40,05,25,45,00,13,26,40,55,12,30,50,145,40,05,30,50,10,30,50,10,30,50,10,30,50,10,30,50,10,30,50,05,20,35,50,05,20,34,47,00,15,35,58,20,40,00,20,40,00,20,40,00,20};

    for(int i=0; i<size; i++) {
        songjungTime.push_back(CustomTime(bustSixteenHourWeek[i], bustSixteenMinWeek[i]));
    }
}
