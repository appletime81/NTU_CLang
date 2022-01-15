#include <iostream>
#include "Pokemon.h"

using namespace std;
// 1109
int main()
{
    Pokemon p1,p2;
    string name;
    int lv,hp;

    cin >> name >> lv >> hp;
    p1.setData(name,lv,hp);

    cin >> name >> lv >> hp;
    p2.setData(name,lv,hp);

    p1.ShowInfo();
    p2.ShowInfo();

    p1.Attack(p2);
    p2.Attack(p1);
    p1.Attack(p2);
    p2.Attack(p1);

    p1.ShowInfo();
    p2.ShowInfo();

    return 0;
}