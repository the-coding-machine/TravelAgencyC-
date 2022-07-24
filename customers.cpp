#include "customers.h"

void customers::take_info() {
    cout << "|--------------------------------------------------------------------|" << endl;
    cout << "Enter customer ID ( just numbers ) : " << endl;
    cin >> customer_id ;
    cout << "Enter last name : " << endl;
    cin  >> m_name ;
    cout << "Gender (male/female/other) : " << endl;
    cin  >> m_gender ;
    cout << "Enter age : " << endl;
    cin  >> m_age ;
    cout << "Enter address : " << endl;
    cin  >> m_address ;
    ofstream file("C:\\Users\\user\\Desktop\\C++\\PROJECTS\\Hotel\\customers_data\\" + to_string(customer_id) +"_"+ m_name + ".txt" ,ios::app);
    file << "customer_id : " << customer_id <<"\nfull name : " << m_name << "\ngender : " << m_gender
    << "\nage : " << m_age << "\naddress : " << m_address ;
    file.close();
    cout << "---------------Customer added---------------" << endl;


}

void customers::show_info()
{
    int user_id;
    string user_name;
    cout << "Enter customer ID (just numbers) : " << endl;
    cin >> user_id;
    cout << "Enter last name : " <<endl;
    cin >> user_name ;
    cout << "|--------------------------------------------------------------------|" << endl;
    ifstream file("C:\\Users\\user\\Desktop\\C++\\PROJECTS\\Hotel\\customers_data\\" + to_string(user_id) +"_"+ user_name + ".txt") ;
    if (!file) { cout << user_id << " "<< user_name << " Not found!\n" ; }
    else
    while(!(file.eof()))
    {
        getline(file,info) ;
        cout << info << endl;
    }
    cout << "|--------------------------------------------------------------------|" << endl;
}

void customers::read_from_file(int sample,string sample2)
{
    ifstream file("C:\\Users\\user\\Desktop\\C++\\PROJECTS\\Hotel\\" + sample2 + "\\" + to_string(sample) + ".txt" ) ;
    if (!file) {cout << sample << " Not founded!\n" << endl;}
    else {
        string reader, content;
        int total=0;
        while (getline(file, reader)) {
            content += reader;
            if (sample2 == "bills") {
                total += stol(reader);
            }
            content.push_back('\n');
        }
        if (sample2 != "bills") {
            cout << "---------------------" << endl;
            cout << content << endl;
            cout << "---------------------" << endl; }
        else if (sample2 == "bills") { cout <<"Total charge : " << total;}
    }
}