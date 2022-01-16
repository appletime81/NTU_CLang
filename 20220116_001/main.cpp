#include <iostream>
#include "Pokemon.h"

using namespace std;


int main() {
    string pcName1;
    string PokemonName1, PokemonName2;
    int Lv1, Lv2;
    int Hp1, Hp2;

    //cin >> pcName1;
    getline(cin, pcName1);
    PC pc1(pcName1);

    cin >> PokemonName1 >> Lv1 >> Hp1;
    cin >> PokemonName2 >> Lv2 >> Hp2;
    Pokemon p1(PokemonName1, Lv1, Hp1),
            p2(PokemonName2, Lv2, Hp2);

    p1.Attack(p2);
    p2.Attack(p1);

    pc1.Cure(p1);
    pc1.Cure(p2);

    p1.ShowInfo();
    p2.ShowInfo();

    return 0;
}