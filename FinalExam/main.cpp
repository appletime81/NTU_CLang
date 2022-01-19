#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class eCashSystem
{
public:
    void login() {
        char buffer[256]; // 紀錄txt檔裡的字串
        ifstream input("record.txt"); // 打開紀錄檔

        // 請使用者輸入ID
        cout << "請輸入您的帳號: " << endl;
        cin >> ID;

        // 檢查是否有紀錄檔，如果沒有創建一個
        if (!input.is_open())
        {
            cout << "帳號不存在，第一次使用!" << endl;

            // 如果沒有record.txt檔，建立一個
            ofstream output("record.txt");
            output.close();
        }
        else
        {
            while (!input.eof())
            {
                input.getline(buffer, 100);
                cout << buffer << endl;
                if (buffer == ID) {
                    cout << "Yes, you are in." << endl;
                }
            }
        }

        //
}

    void logout()
    {

    }

    void store(int m)
    {

    }

    void pay(int m)
    {

    }

    void display()
    {

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
