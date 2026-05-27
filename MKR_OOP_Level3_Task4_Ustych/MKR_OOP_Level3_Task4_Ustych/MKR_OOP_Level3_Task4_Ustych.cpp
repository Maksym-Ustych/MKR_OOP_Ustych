#include <iostream>
#include <cstdarg>

using namespace std;

void sum(int& result, int a, int b)
{
    result = a + b;
}

void sum(int& result, int a, int b, int c)
{
    result = a + b + c;
}

void sumDefault(int* result, int a, int b = 0, int c = 0)
{
    *result = a + b + c;
}

void sumVariable(int& result, int count, ...)
{
    va_list args;

    va_start(args, count);

    result = 0;

    for (int i = 0; i < count; i++)
    {
        result += va_arg(args, int);
    }

    va_end(args);
}

int main()
{
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "");

    int result1;
    int result2;
    int result3;

    sum(result1, 5, 10);

    cout << "Сума двох чисел: "
        << result1 << endl;

    sum(result1, 5, 10, 15);

    cout << "Сума трьох чисел: "
        << result1 << endl;

    sumDefault(&result2, 7, 8);

    cout << "Сума з параметрами за замовчуванням: "
        << result2 << endl;

    sumVariable(result3, 4, 1, 2, 3, 4);

    cout << "Сума зі змінною кількістю параметрів: "
        << result3 << endl;

    return 0;
}