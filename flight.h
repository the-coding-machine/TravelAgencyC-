
#ifndef HOTEL_FLIGHT_H
#define HOTEL_FLIGHT_H
#include <iostream>
#include <string>
#include "customers.h"
#include <windows.h>
 class flight : public customers {
private :
     string m_airlines [4] = {"Mahan Airline","Iran Airline"
             ,"Fly Emirates","Private Jet"};
     int m_price [4] = {400,480,690,2145};
     int m_f_cost;
 public :
     void get_flight();
     void show_flight();
};
#endif //HOTEL_FLIGHT_H
