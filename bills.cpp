#include "bills.h"
void bills::charge() {
    cout << "Enter customer ID (just number) :" << endl;
    int input;
    cin >> input ;
    customers::read_from_file(input,"bills");
    /* coded by KASRA DAVOODI */
}
