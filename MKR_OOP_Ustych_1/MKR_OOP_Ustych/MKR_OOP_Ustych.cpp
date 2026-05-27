#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    int a, b;

    cout << "Введіть перше число: ";
    cin >> a;

    cout << "Введіть друге число: ";
    cin >> b;

    try
    {
        if (b == 0)
        {
            throw "Помилка: ділення на нуль!";
        }

        cout << "Результат ділення: " << a / b << endl;
    }
    catch (const char* message)
    {
        cout << message << endl;
    }

    return 0;
}