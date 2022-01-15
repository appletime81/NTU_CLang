#include <iostream>

using namespace std;

class Pokemon {
public:
    void ShowInfo();
    void Attack(Pokemon &Target);// 攻擊
    void Defence(int atkp);//防御(被攻擊？)
    void Cure();//治癒
    void setData(string, int, int);
private:
    string Name;
    int Lv;
    int HpMax;
    int HpCur;
};
