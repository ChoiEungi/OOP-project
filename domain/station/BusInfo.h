#ifndef OOP_PROJECT_BUSINFO_H
#define OOP_PROJECT_BUSINFO_H

#include <string>
#include "vector"

class BusInfo {
private:
    std::string busName;
    std::vector<std::string> busArrivalTime;
    std::string busStationName;
    int takenTime;
public:
    void getBusInfo();
};

/*
 *
버스 리스트 멤버
- 소요 시간 (정류장 ~ 도착 지점)
- 버스 정류장
버스 리스트 메소드
배차 시간 리스트(출발 시간, 정류장) -> 최적 시간  :
	min(전체 배차 시간-출발) -> return 버스 출발 시간 , 소요 시간, 버스 정류장, 버스 번호호
**
*/

#endif //OOP_PROJECT_BUSINFO_H

