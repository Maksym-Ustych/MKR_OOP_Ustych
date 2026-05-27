#include <iostream>

using namespace std;

class Message
{
public:
    void show()
    {
        cout << "Об'єктно-орієнтований підхід" << endl;
    }
};

int main()
{
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "");

    Message obj;

    obj.show();

    return 0;
}