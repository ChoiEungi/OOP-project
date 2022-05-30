#include "Destination.cpp"
#include "iostream"

using namespace std;


class Airplane : public Destination{

public:
    Airplane(BusInfoList busInfoList) : Destination(busInfoList){
    }

    void initBusInfoList(){
        vector<CustomTime> GISTStation;
        GISTStation.push_back(CustomTime(12, 00));
        GISTStation.push_back(CustomTime(12, 30));
        BusInfo songjungInfo = BusInfo("송정33", GISTStation, "과기원역", 40);
    }

};