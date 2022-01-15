#include <iostream>
#include "Pokemon.h"

using namespace std;

void Pokemon::ShowInfo() {
    cout << "Name: " << Name << endl;
    cout << "Lv: " << Lv << endl;
    cout << "HP: " << HpMax << "/" << HpCur << endl << endl;
}