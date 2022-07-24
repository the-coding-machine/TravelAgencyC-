#include "taxi.h"

string taxi::get_taxi()
{
         cout <<"Enter customer ID (just numbers) : " << endl;
         cin >> customer_id;
         cout << "----------------------------" << endl;
         cout << "Choose your service level : " << endl;
         cout << "1) Normal ( 5 dollars per 1km )\n"
                 "2) VIP ( 12.5 dollar per 1km )\n"
                 "3) Jeff Bezos mode! (20 dollar per 1km )\n";
          cout << "----------------------------" << endl;
        cin >> level;
        cout << "Specify the length of the route (km) : " << endl;

        cin >> m_kilometers;
        switch (level)
        {
            case 1 :
                m_cost = m_kilometers * 5;
                cout << "Price : " << m_cost << endl;
                break;
            case 2 :
                m_cost = m_kilometers * 12.5;
                cout << "Price : " << m_cost << endl;
                break;
            case 3 :
                m_cost = m_kilometers * 20;
                cout << "Price : " << m_cost << endl;
                break;
        }
        cout << "Do want to hire it ? (yes/no) " << endl;
        string hire;
        cin >> hire;
        if (hire == "yes")
        {
            ofstream file("C:\\Users\\user\\Desktop\\C++\\PROJECTS\\Hotel\\taxis\\" + to_string(customer_id) + ".txt" ,ios::app);
            file << "ID : " << customer_id << "\nService level : " << level << "\nLength :"
            << m_kilometers << "\nPrice : " << m_cost ;
            /* coded by KASRA DAVOODI */
            file.close();
            ofstream file_bill("C:\\Users\\user\\Desktop\\C++\\PROJECTS\\Hotel\\bills\\" + to_string(customer_id) + ".txt" ,ios::app);
             file_bill << m_cost << endl;
             file_bill.close();
            cout << "**** TAXI HIRED SUCCESSFULLY ****" << endl;
        }
        else cout << "No problem !" << endl;
        return hire;

}
//-------------this function is used in "taxi.cpp" "booking.cpp" "bills.cpp" -----------------

    //--------------------------------------------------------------------------------
void taxi::taxi_records()
{
    bool stop = false ;
    while (!stop) {
        cout << "Enter customer Id : " << endl;
        int input;
        cin >> input;
        customers::read_from_file(input, "taxis");
        Sleep(2000);
        cout << "OPTIONS : "
                "\n1) Another taxi record"
                "\n2) MainMenu" << endl;
        cin >> input;
        if (input == 2 ) {stop = true; }
    }
}