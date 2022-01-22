#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <array>


using namespace std;
using std::ios_base;

class eCashSystem {
public:
    void login() {
        char buffer[256]; // ����txt�ɸ̪��r��
        int userExit = 0;
        int index = 0;
        int i;
        char *token;
        char *new_token;
        char userInfoBuffer[256];
        array<string, 4> userInfoArray;

        ifstream input("record.txt"); // ���}������

        // �ˬd�O�_�������ɡA�p�G�S���Ыؤ@��
        if (!input.is_open()) {
            cout << "�b�����s�b�A�Ĥ@���ϥ�!\n" << endl;
            Money = 0;

            // �p�G�S��record.txt�ɡA�إߤ@��
            ofstream output("record.txt");
            output << ID << "\t" << Money << endl;
            output.close();
        } else {
            // ��M�ϥΪ̬O�_�s�b
            while (!input.eof()) {
                input.getline(buffer, 100);
                strcpy(userInfoBuffer, buffer);

                token = strtok(buffer, "\t");
                while (token != NULL) {
                    if (token == ID) {
                        userExit = 1;
                    }
                    token = strtok(NULL, "\t");
                }
                if (userExit) {
                    break;
                }
            }

            // �p�G�s�b�A�^����ID�W�٤ξl�B
            new_token = strtok(userInfoBuffer, "\t");
            while (new_token != NULL) {
                userInfoArray[index] = new_token;
                index++;
                new_token = strtok(NULL, "\t");
            }
            if (userExit) {
                for (i = 0; i < 3; i++) {
                    if (i == 0) {
                        ID = userInfoArray[i];
                    } else if (i == 1) {
                        Money = stoi(userInfoArray[i]);
                    }
                }
            }

            // �p�G�ϥΪ̤��s�b��t�Τ��A�ЫبϥΪ�
            if (!userExit) {
                cout << "�b�����s�b�A�Ĥ@���ϥ�!\n" << endl;
                Money = 0;

                ofstream recordNewUser("record.txt", ios_base::app);
                recordNewUser << ID << "\t0" << endl;
                recordNewUser.close();
            }
        }
        option_display();
    }

    void logout() {
        save_last_status();
        cout << "eCash: �b���n�X, �w�s��!" << endl;
        cout << "���¡AByeBye!" << endl;
    }

    void store(int m) {
        if (m <= 0) {
            cout << "eCash: �п�J�j�l0�����B" << endl;
        } else {
            cout << "eCash: �z�s�F" << m << "��" << endl;
            Money += m;
        }
    }

    void pay(int m) {

    }

    void option_display() {
        cout << "\n" << ID << "�z�n�A�п�ܶ���:" << endl;
        cout << "s: �x��" << endl;
        cout << "p: ���O" << endl;
        cout << "d: �d�߾l�B" << endl;
        cout << "q: ���}" << endl;
        cout << ">";
    }

    void display(int executionTimes) {
        if (executionTimes == 0) {
            cout << "=== �w��ϥ�eCash ===" << endl;
            cout << "eCash: �п�J�z���b��:";
            cin >> ID;
            login();
        } else {
            option_display();
        }
    }

    void save_last_status() {
        char buffer[256]; // ����txt�ɸ̪��r��
        int userExit = 0;
        char *token;
        char userInfoBuffer[256];
        ofstream recordNewUser("new_record.txt");
        ifstream input("record.txt"); // ���}������

        while (!input.eof()) {
            input.getline(buffer, 100);


            if (strlen(buffer) > 0) {
                strcpy(userInfoBuffer, buffer);
                ///////////////////////////////////////////////////////
                token = strtok(buffer, "\t");
                while (token != NULL) {
                    if (token == ID) {
                        userExit = 1;
                    }
                    token = strtok(NULL, "\t");
                }

                if (userExit) {
                    recordNewUser << ID << "\t" << Money << endl;
                    userExit = 0;
                } else {
                    recordNewUser << userInfoBuffer << endl;
                }
                ///////////////////////////////////////////////////////
            }
        }
        recordNewUser.close();
        input.close();

        remove("record.txt");
        rename("new_record.txt", "record.txt");
    }

private:
    int Money;
    string ID;

};

int main() {
    int ctrlLoop = 1;
    int count = 0;
    int m;
    char opt;
    eCashSystem eCash;
    while (ctrlLoop) {
        eCash.display(count);
        scanf(" %c", &opt);
        switch (opt) {
            case 's':
                cout << "�п�J�x�s���B:" << endl;
                scanf("%d", &m);
                eCash.store(m);
                break;
            case 'd':
                break;
            case 'q':
                eCash.logout();
                ctrlLoop = 0;
                break;
        }
        count++;
    }

    system("PAUSE");
    return 0;
}
