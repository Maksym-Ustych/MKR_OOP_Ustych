#include <iostream>

using namespace std;

class Engine
{
public:
    void start()
    {
        cout << "Двигун запущено" << endl;
    }
};

class Car
{
private:
    Engine engine;

public:
    void startCar()
    {
        engine.start();
    }
};

int main()
{
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "");

    Car car;

    car.startCar();

    return 0;
}