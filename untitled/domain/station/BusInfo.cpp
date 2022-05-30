#include "BusInfo.h"


BusInfo::BusInfo(std::string name, std::vector<CustomTime> busArrivalTimeList, std::string beginningBusStationName, int takenTime) {
    this->busName = name;
    this->busArrivalTimeList = busArrivalTimeList;
    this->beginningBusStationName = beginningBusStationName;
    this->takenTime = takenTime;
}

int BusInfo::findRecommendationTime(CustomTime beginningTime) {
    int idx, min_val;
    for (int i = 0; i < this->busArrivalTimeList.size(); ++i) {
        CustomTime &customTime = this->busArrivalTimeList.at(i);
    }
    return 0;
}

std::string BusInfo::getResult() {
    return "hello";
}


