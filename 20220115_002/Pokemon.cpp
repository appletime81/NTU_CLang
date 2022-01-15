//
// Created by apple on 2022/1/15.
//
#include <iostream>
#include "Pokemon.h"

using namespace std;


void Pokemon::ShowInfo() {
    cout << "Name: " << Name << endl;
    cout << "Lv: " << Lv << endl;
    cout << "HP: " << HpCur << "/"
         << HpMax << endl << endl;
}

void Pokemon::Attack(Pokemon &Target) {// 攻擊
    cout << Name << " Attack " << Target.Name << " " << Lv << " Points.\n";
    Target.Defence(Lv);
}

void Pokemon::Defence(int atkp) {//防御(被攻擊？)
    HpCur -= atkp;
}

void Pokemon::Cure() {//治癒
    cout << Name << " has restore health.\n";
    HpCur = HpMax;
}



