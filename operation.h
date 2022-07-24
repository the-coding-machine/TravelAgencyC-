#ifndef HOTEL_OPERATION_H
#define HOTEL_OPERATION_H
#include "customers.h"
#include "menu.h"
#include "taxi.h"
#include "booking.h"
#include "bills.h"
#include "flight.h"
#include <windows.h>
void operation(int respond)
{
    customers customer1;
    taxi taxi1;
    booking book1;
    bills bill1;
    flight flight1;
    int input;
    switch (respond) {
        case 1 : {
            cout << "What is your command ?" << endl;
            cout << "---------------------" << endl;
            cout << "1) Add a new customer\n"
                    "2) Show customers information\n";
            cin >> input;
            if (input == 1) { customer1.take_info(); }
            else if (input == 2) { customer1.show_info(); }
            menu::m_first = 1;
            cout << "\n---------> ******* getting back to menu ******* <---------\n\n\n " << endl;
            Sleep(3000);
            break;
        }
        case 2 :
            cout << "What is your command ?" << endl;
            cout << "---------------------" << endl;
            cout << "1) Hire A Taxi \n"
                    "2) Show previous services\n";
            cin >> input;
            if (input == 1) { taxi1.get_taxi() ; }
            else if (input == 2) {taxi1.taxi_records();}
            menu::m_first = 1;
            cout << "\n---------> ******* getting back to menu ******* <---------\n\n\n " << endl;
            Sleep(3000);
            break;
        case 3:
            cout << "What is your command ?" << endl;
            cout << "---------------------" << endl;
            cout << "1) Book A Hotel \n"
                    "2) Show previous hotel reservations\n";
            cin >> input;
            if (input == 1) { book1.get_hotel() ; }
            else if (input == 2) {book1.show_book();}
            menu::m_first = 1;
            cout << "\n---------> ******* getting back to menu ******* <---------\n\n\n " << endl;
            Sleep(3000);
            break;
        case 4 :
            cout << "What is your command ?" << endl;
            cout << "---------------------" << endl;
            cout << "1) Reserve a flight \n"
                    "2) Show previous flight reservations\n";
            cin >> input;
            if (input == 1) { flight1.get_flight() ; }
            else if (input == 2) {flight1.show_flight();}
            menu::m_first = 1;
            cout << "\n---------> ******* getting back to menu ******* <---------\n\n\n " << endl;
            Sleep(3000);
            break;
        case 5 :
             bill1.charge();
            menu::m_first = 1;
            cout << "\n---------> ******* getting back to menu ******* <---------\n\n\n " << endl;
            Sleep(3000);
             break;
        case 6 : {

            cout << "fare well\n";
            exit(0);
        }
    }
}
#endif //HOTEL_OPERATION_H