#include <iostream>
#include <fstream>
#include <string>
#include <array>
#include <string.h>


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

        // �ШϥΪ̿�JID
        cout << "�п�J�z���b��: ";
        cin >> ID;

        // �ˬd�O�_�������ɡA�p�G�S���Ыؤ@��
        if (!input.is_open()) {
            cout << "�b�����s�b�A�Ĥ@���ϥ�!" << endl;

            // �p�G�S��record.txt�ɡA�إߤ@��
            ofstream output("record.txt");
            output << ID << "\t0" << endl;
            output.close();
        } else {
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
            printf("------------------------------------------\n");
            new_token = strtok(userInfoBuffer, "\t");
            while (new_token != NULL) {
                userInfoArray[index] = new_token;
                index++;
                new_token = strtok(NULL, "\t");
            }

            for (i = 0; i < 3; i++) {
                cout << userInfoArray[i] << endl;
            }

            if (!userExit) {
                cout << "Hello" << endl;
                ofstream recordNewUser("record.txt", ios_base::app);
                recordNewUser << ID << "\t0" << endl;
                recordNewUser.close();
            }
        }

        //
    }

    void logout() {

    }

    void store(int m) {

    }

    void pay(int m) {

    }

    void display() {

    }

private:
    int Money;
    string ID;
};

int main() {
    int ctrlLoop = 1;

    eCashSystem eCash;

    eCash.login();

    system("PAUSE");
    return 0;
}
