#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "");

    double number = 123.456789;

    cout << "Звичайне число: " << number << endl;

    cout << fixed << setprecision(2);
    cout << "Число з двома знаками після коми: "
        << number << endl;

    cout << setw(15) << right
        << "Текст справа" << endl;

    cout << setw(15) << left
        << "Текст зліва" << endl;

    cout << hex << 255 << endl;
    cout << oct << 255 << endl;
    cout << dec << 255 << endl;

    return 0;
}