#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "");

    int age;
    string name;

    cout << "Введіть ім'я: ";
    cin >> name;

    cout << "Введіть вік: ";
    cin >> age;

    cout << "Користувач: " << name << endl;
    cout << "Вік: " << age << endl;

    return 0;
}