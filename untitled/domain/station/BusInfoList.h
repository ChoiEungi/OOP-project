#ifndef UNTITLED_BUSINFOLIST_H
#define UNTITLED_BUSINFOLIST_H

#include "vector"
#include "BusInfo.h"

class BusInfoList {
private:
    std::vector<BusInfo> busList;
public:
    BusInfoList(std::vector<BusInfo> busList);
    void init(); //버스 정보를 초기화 하는 메소드
    void addBusInfo(BusInfo busInfo);
};


#endif //UNTITLED_BUSINFOLIST_H
