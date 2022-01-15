//
// Created by apple on 2022/1/15.
//

#ifndef INC_20220115_002_POKEMON_H
#define INC_20220115_002_POKEMON_H

#include <iostream>

using namespace std;

class Pokemon {
public:
    void ShowInfo();

    void Attack(Pokemon &Target);// 攻擊
    void Defence(int atkp);//防御(被攻擊？)
    void Cure();//治癒
    string Name;
    int Lv;
    int HpMax;
    int HpCur;
};


#endif //INC_20220115_002_POKEMON_H
