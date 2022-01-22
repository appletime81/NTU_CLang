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
        char buffer[256]; // 紀錄txt檔裡的字串
        int userExit = 0;
        int index = 0;
        int i;
        char *token;
        char *new_token;
        char userInfoBuffer[256];
        array<string, 4> userInfoArray;

        ifstream input("record.txt"); // 打開紀錄檔

        // 檢查是否有紀錄檔，如果沒有創建一個
        if (!input.is_open()) {
            cout << "帳號不存在，第一次使用!\n" << endl;
            Money = 0;

            // 如果沒有record.txt檔，建立一個
            ofstream output("record.txt");
            output << ID << "\t" << Money << endl;
            output.close();
        } else {
            // 找尋使用者是否存在
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

            // 如果存在，擷取其ID名稱及餘額
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

            // 如果使用者不存在於系統中，創建使用者
            if (!userExit) {
                cout << "帳號不存在，第一次使用!\n" << endl;
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
        cout << "eCash: 帳號登出, 已存檔!" << endl;
        cout << "謝謝，ByeBye!" << endl;
    }

    void store(int m) {
        if (m <= 0) {
            cout << "eCash: 請輸入大餘0的金額" << endl;
        } else {
            cout << "eCash: 您存了" << m << "元" << endl;
            Money += m;
        }
    }

    void pay(int m) {

    }

    void option_display() {
        cout << "\n" << ID << "您好，請選擇項目:" << endl;
        cout << "s: 儲值" << endl;
        cout << "p: 消費" << endl;
        cout << "d: 查詢餘額" << endl;
        cout << "q: 離開" << endl;
        cout << ">";
    }

    void display(int executionTimes) {
        if (executionTimes == 0) {
            cout << "=== 歡迎使用eCash ===" << endl;
            cout << "eCash: 請輸入您的帳號:";
            cin >> ID;
            login();
        } else {
            option_display();
        }
    }

    void save_last_status() {
        char buffer[256]; // 紀錄txt檔裡的字串
        int userExit = 0;
        char *token;
        char userInfoBuffer[256];
        ofstream recordNewUser("new_record.txt");
        ifstream input("record.txt"); // 打開紀錄檔

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
                cout << "請輸入儲存金額:" << endl;
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
