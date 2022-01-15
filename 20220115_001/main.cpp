#include <iostream>
#include "Pokemon.h"
using namespace std;

int main()
{
    Pokemon p1,p2;
    string name;
    int lv, hp;

    cin >> name >> lv >> hp;
    p1.Name = name;
    p1.Lv = lv;
    p1.HpCur = p1.HpMax = hp;

    cin >> name >> lv >> hp;
    p2.Name = name;
    p2.Lv = lv;
    p2.HpCur = p2.HpMax = hp;

    p1.ShowInfo();
    p2.ShowInfo();

    return 0;
}