#include <iostream>
#include <stdio.h>


using namespace std;

class eCash {
public:
    void store(int m) {
        if (m < 0) {
            cout << "Please enter a number > 0." << endl;
        } else if (m >= 0) {
            cout << "You stored " << m << "." << endl;
            Money += m;
        }
    }

    void pay(int m) {
        if (m > Money) {
            cout << "Insufficient balance." << endl;
        } else if (m < 0) {
            cout << "Please enter a number > 0." << endl;
        } else {
            cout << "You spend " << m << "." << endl;
            Money -= m;
        }
    }

    void display() {
        cout << "You remaining " << Money << "." << endl;
    }

private:
    int Money = 0;
    int chekMoney = 0;
};

int main(int argc, char **argv) {

    int ctrlLoop = 1;
    int inputMoney;
    char opt;

    eCash c;

    while (ctrlLoop) {
        scanf("%c", &opt);

        switch (opt) {
            case 's':
                scanf("%d", &inputMoney);
                cout << "eCash: ";
                c.store(inputMoney);
                break;
            case 'p':
                scanf("%d", &inputMoney);
                cout << "eCash: ";
                c.pay(inputMoney);
                break;
            case 'd':
                cout << "eCash: ";
                c.display();
                break;
            case 'q':
                cout << "eCash: ";
                cout << "Thank you. Bye Bye." << endl;
                ctrlLoop = 0;
                break;
        }
    }

    return 0;
}
