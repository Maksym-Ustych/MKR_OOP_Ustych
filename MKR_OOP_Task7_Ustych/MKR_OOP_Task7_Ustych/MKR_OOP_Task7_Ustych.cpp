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
    Engine* engine;

public:
    Car(Engine* e)
    {
        engine = e;
    }

    void move()
    {
        engine->start();
        cout << "Автомобіль рухається" << endl;
    }
};

int main()
{
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "");

    Engine engine;

    Car car(&engine);

    car.move();

    return 0;
}