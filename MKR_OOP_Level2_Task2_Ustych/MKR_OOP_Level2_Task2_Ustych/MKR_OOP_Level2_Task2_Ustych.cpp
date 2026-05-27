#include <iostream>
#include <vector>

using namespace std;

class Observer
{
public:
    virtual void update(int temperature) = 0;
};

class Display : public Observer
{
public:
    void update(int temperature) override
    {
        cout << "Нова температура: "
            << temperature << " C" << endl;
    }
};

class WeatherStation
{
private:
    vector<Observer*> observers;
    int temperature;

public:
    void addObserver(Observer* observer)
    {
        observers.push_back(observer);
    }

    void setTemperature(int temp)
    {
        temperature = temp;

        for (Observer* observer : observers)
        {
            observer->update(temperature);
        }
    }
};

int main()
{
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "");

    WeatherStation station;

    Display display1;
    Display display2;

    station.addObserver(&display1);
    station.addObserver(&display2);

    station.setTemperature(25);

    return 0;
}