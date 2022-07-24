
#ifndef HOTEL_BOOKING_H
#define HOTEL_BOOKING_H
#include <string>
#include <iostream>
#include "customers.h"
#include <windows.h>
using namespace std;
class booking : public customers
{
private :
    string m_hotels [4] = {"Hilton Hotel","Jumeirah Hotel"
                        ,"Beverly Hills Hotel","The Plaza"};
    int m_price [4] = {100,120,170,140};
    int m_h_cost;
public :
    void get_hotel();
    void show_book();
};
#endif //HOTEL_BOOKING_H
