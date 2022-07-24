#include "flight.h"

void flight::get_flight() {
    cout << "\n\t**** -> Welcome to flight section! <- ****" << endl;
    cout <<"Enter customer ID (just numbers) : " << endl;
    cin >> customer_id;
    cout <<"Choose your Airline : "<< endl;
    for(int i=1;i<=4;i++)
    {
        cout << i << ") " << m_airlines[i-1] << " / Price (per person) : " << m_price[i-1] << endl;
    }
    int choose;
    cin >> choose ;
    cout << "How many are you ? " << endl;
    int number;
    cin >> number;
    int first_class=1;
    if (choose !=4 ) {
    cout << "Option : "
            "\n1) Economy Class"
            "\n2) First Class ( double cost ) " << endl;
    cin >> first_class;
    }
    switch (choose)
    {
        case 1 :
            m_f_cost = number * m_price[0] * first_class ;
            cout << "Price : " <<m_f_cost<< endl;
            break;
        case 2 :
            m_f_cost = number * m_price[1] * first_class ;
            cout << "Price : " << m_f_cost << endl;
            break;
        case 3 :
            m_f_cost = number * m_price[2] * first_class;
            cout << "Price : " << m_f_cost << endl;
            break;
        case 4 :
            m_f_cost = number * m_price[3] *first_class;
            cout << "Price : " << m_f_cost << endl;
            break;
    }
    cout << "Do want to reserve it ? (yes/no) " << endl;
    string book;
    cin >> book;
    if (book == "yes")
    {
        ofstream file("C:\\Users\\user\\Desktop\\C++\\PROJECTS\\Hotel\\flights\\" + to_string(customer_id) + ".txt" ,ios::app);
        file << "ID : " << customer_id << "\nAirline : " << m_airlines[choose-1] << "\nNumber of person : "
             << number <<"\nFirst class : " ;
        if(first_class==2) {file << "YES" << "\nPrice : " << m_f_cost ;}
        if(first_class==1) {file<< "NO" << "\nPrice : " << m_f_cost ;}
        file.close();
        ofstream file_bill("C:\\Users\\user\\Desktop\\C++\\PROJECTS\\Hotel\\bills\\" + to_string(customer_id) + ".txt" ,ios::app);
        file_bill << m_f_cost << endl;
        file_bill.close();
        cout << "**** FLIGHT RESERVED SUCCESSFULLY ****" << endl;
    }
    else cout << "No problem !" << endl;


}

void flight::show_flight()
{
    bool stop = false ;
    while (!stop) {
        cout << "Enter customer Id : " << endl;
        int input;
        cin >> input;
        customers::read_from_file(input, "flights");
        Sleep(1000);
        cout << "OPTIONS : "
                "\n1) Another flight record"
                "\n2) MainMenu" << endl;
        cin >> input;
        if (input == 2 ) {stop = true; }
    }
}
