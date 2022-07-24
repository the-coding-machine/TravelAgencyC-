/* coded by KASRA DAVOODI */
#include "operation.h"
int main()
{
    int respond=0;
    while(respond!=5) {
        menu menu;
        cout << "|-> Choose Section <-| " << endl;
        cin >> respond;
        operation(respond);
    }


    return 0;
}

