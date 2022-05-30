#include "../station/BusInfo.h"
#include "../station/BusInfoList.h"

using namespace std;

class Destination {
protected:
    BusInfoList busInfoList;
public:
    Destination(BusInfoList busInfoList);
    virtual void initBusInfoList();
    // calculate the bus information by using bus info?
};