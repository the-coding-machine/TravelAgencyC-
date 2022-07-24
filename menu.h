
#ifndef HOTEL_MENU_H
#define HOTEL_MENU_H
#include <string>
#include <iostream>
#include "customers.h"
using namespace std;
class menu {
private :
    string m_admin;
    int m_command;

public :
   inline static int m_first=0;
    menu()
    {
       if (m_first==0){  cout << "\t\t\t--->|||  Welcome to ***  *** Travel Agency  |||<---" << endl;
           cout << "Enter your admin ID : " << endl;
        cin >> m_admin ;
        cout << "Hello " << m_admin << " what is your command ?" << endl; }
       if (m_first==1) {cout << "Select new command : " << endl;}
        cout << "|---------------------------------------|" << endl;
        cout << "|\tCustomer Management -> 1\t|" << endl;
        cout << "|\tTaxi Management     -> 2\t|" << endl;
        cout << "|\tHotel Management    -> 3\t|" << endl;
        cout << "|\tflight management   -> 4\t|" << endl;
        cout << "|\tCharges & Bill      -> 5\t|" << endl;
        cout << "|\tExit                -> 6\t|" << endl;
        cout << "|---------------------------------------|" << endl;
    }
};
#endif //HOTEL_MENU_H
