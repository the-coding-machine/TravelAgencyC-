#include "booking.h"

void booking::get_hotel() {
    cout << "\n\t**** -> Welcome to booking section! <- ****" << endl;
    cout <<"Enter customer ID (just numbers) : " << endl;
    cin >> customer_id;
    cout <<"Choose your Hotel : "<< endl;
    for(int i=1;i<=4;i++)
    {
        cout << i << ") " << m_hotels[i-1] << " / Price (one night per person) : " << m_price[i-1] << endl;
    }
    int choose;
    cin >> choose ;
    cout << "How many are you ? " << endl;
    int number;
    cin >> number;
    cout << "How many night would like yo stay ?" << endl;
    int nights;
    cin >> nights;
    switch (choose)
    {
        case 1 :
            m_h_cost = number * m_price[0] * nights ;
            cout << "Price : " <<m_h_cost<< endl;
            break;
        case 2 :
            m_h_cost = number * m_price[1] * nights ;
            cout << "Price : " << m_h_cost << endl;
            break;
        case 3 :
            m_h_cost = number * m_price[2] * nights;
            cout << "Price : " << m_h_cost << endl;
            break;
        case 4 :
            m_h_cost = number * m_price[3] * nights;
            cout << "Price : " << m_h_cost << endl;

            break;
    }
    cout << "Do want to book it ? (yes/no) " << endl;
    string book;
    cin >> book;
    if (book == "yes")
    {
        ofstream file("C:\\Users\\user\\Desktop\\C++\\PROJECTS\\Hotel\\hotels\\" + to_string(customer_id) + ".txt" ,ios::app);
        file << "ID : " << customer_id << "\nHotel : " << m_hotels[choose-1] << "\nNumber of person : "
                                                                             /* coded by KASRA DAVOODI */
             << number <<"\nNights : " << nights<< "\nPrice : " << m_h_cost ;
        file.close();
        ofstream file_bill("C:\\Users\\user\\Desktop\\C++\\PROJECTS\\Hotel\\bills\\" + to_string(customer_id) + ".txt" ,ios::app);
        file_bill << m_h_cost << endl;
        file_bill.close();
        cout << "**** HOTEL BOOKED SUCCESSFULLY ****" << endl;
    }
    else cout << "No problem !" << endl;

}

void booking::show_book()
{
    bool stop = false ;
    while (!stop) {
        cout << "Enter customer Id : " << endl;
        int input;
        cin >> input;
        customers::read_from_file(input, "hotels");
        Sleep(2000);
        cout << "OPTIONS : "
                "\n1) Another book record"
                "\n2) MainMenu" << endl;
        cin >> input;
        if (input == 2 ) {stop = true; }
    }
}
