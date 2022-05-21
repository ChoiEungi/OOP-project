#include "Destination.h"
#include "iostream"

using namespace std;


class Airplane : public Destination{

public:
    Airplane(){
        initBusInfos();

    }

    void initBusInfos(){
        vector<custom_time> GISTStation;
        GISTStation.push_back(custom_time(12, 00));
        GISTStation.push_back(custom_time(12, 30));
        BusInfo songjungInfo = BusInfo("송정33", GISTStation, "과기원역", 40);
        this->busInfos.push_back(songjungInfo);
    }
};