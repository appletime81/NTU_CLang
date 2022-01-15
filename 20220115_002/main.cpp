#include <iostream>
#include "Pokemon.h"

using namespace std;

int main() {
    Pokemon pc = {"Pikachu", 50, 500, 500}, p1;

    cin >> p1.Name >> p1.Lv >> p1.HpMax;
    p1.HpCur = p1.HpMax;

    p1.Attack(pc);
    pc.Attack(p1);

    p1.ShowInfo();
    pc.ShowInfo();

    p1.Cure();
    p1.ShowInfo();
    pc.ShowInfo();

    return 0;
}