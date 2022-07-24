
#ifndef HOTEL_TAXI_H
#define HOTEL_TAXI_H
#include <iostream>
#include <filesystem>
#include "customers.h"
#include <windows.h>
using namespace std;
class taxi : public customers {
private :
     double m_kilometers,m_cost;
     int level;
public :
    string get_taxi();
    void taxi_records();

};
#endif //HOTEL_TAXI_H
