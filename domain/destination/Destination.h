#ifndef OOP_PROJECT_DESTINATION_H
#define OOP_PROJECT_DESTINATION_H

#include "../station/BusInfo.h"

class Destination {
protected:
    std::vector<BusInfo> busInfos;
    int arrivalTime;
    int departureTime;
public:
     // calculate the bus information by using bus info?
     virtual void calculateTime(custom_time begin_time);

};


#endif //OOP_PROJECT_DESTINATION_H
