#include <iostream>
#include "travelagency.h"

using namespace std;

int main()
{

    TravelAgency TravelAgency1;

    int Eingabe = 3;

    while(Eingabe != 0){

    cout << "Hallo waehlen Sie bitte zwischen txt (1) und binary (2). Fuer exit 0" << endl;

    cin >> Eingabe;

    if (Eingabe == 1)
        TravelAgency1.readFile();
    else if (Eingabe == 2)
        TravelAgency1.readBinaryFile();
    else if (Eingabe == 0)
        cout << "Bye!" << endl;
    else
        cout << "Smth went wrong! Enter 1 or 2" << endl;
    }
    return 0;
}
