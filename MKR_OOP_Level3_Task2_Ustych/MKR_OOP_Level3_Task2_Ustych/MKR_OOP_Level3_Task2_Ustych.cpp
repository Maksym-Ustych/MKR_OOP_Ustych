#include <iostream>

using namespace std;

class Counter
{
private:
    int minValue;
    int maxValue;
    int currentValue;

public:
    Counter(int minV, int maxV)
    {
        minValue = minV;
        maxValue = maxV;
        currentValue = minValue;
    }

    void increment()
    {
        currentValue++;

        if (currentValue > maxValue)
        {
            currentValue = minValue;
        }
    }

    int getCurrentValue()
    {
        return currentValue;
    }

    void show()
    {
        cout << "Поточне значення лічильника: "
            << currentValue << endl;
    }
};

int main()
{
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "");

    Counter counter(0, 5);

    for (int i = 0; i < 8; i++)
    {
        counter.show();
        counter.increment();
    }

    return 0;
}