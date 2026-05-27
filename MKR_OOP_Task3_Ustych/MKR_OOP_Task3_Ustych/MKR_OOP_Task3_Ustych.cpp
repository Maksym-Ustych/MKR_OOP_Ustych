#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "");

    cout << "Початок роботи програми" << endl;

    throw "Виникла помилка!";

    cout << "Кінець роботи програми" << endl;

    return 0;
}