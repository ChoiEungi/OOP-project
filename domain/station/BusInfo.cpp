#include "BusInfo.h"


BusInfo::BusInfo(std::string name, std::vector<custom_time> busArrivalTimeList, std::string beginningBusStationName, int takenTime) {
    this->busName = name;
    this->busArrivalTimeList = busArrivalTimeList;
    this->beginningBusStationName = beginningBusStationName;
    this->takenTime = takenTime;
}

int BusInfo::findRecommendationTime(custom_time beginningTime) {
    //todo find Recommendataion
    return 0;
}


