#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class eCashSystem
{
public:
    void login() {
        char buffer[256]; // ����txt�ɸ̪��r��
        ifstream input("record.txt"); // ���}������

        // �ШϥΪ̿�JID
        cout << "�п�J�z���b��: " << endl;
        cin >> ID;

        // �ˬd�O�_�������ɡA�p�G�S���Ыؤ@��
        if (!input.is_open())
        {
            cout << "�b�����s�b�A�Ĥ@���ϥ�!" << endl;

            // �p�G�S��record.txt�ɡA�إߤ@��
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
