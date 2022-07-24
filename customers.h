
#ifndef HOTEL_CUSTOMERS_H
#define HOTEL_CUSTOMERS_H
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
class customers{
private :
    string m_name , m_age , m_gender , m_address, info ;
protected:
    int customer_id;
public :
    void take_info();
    void show_info();
    static void read_from_file(int sample,string sample2) ;
};
#endif //HOTEL_CUSTOMERS_H
