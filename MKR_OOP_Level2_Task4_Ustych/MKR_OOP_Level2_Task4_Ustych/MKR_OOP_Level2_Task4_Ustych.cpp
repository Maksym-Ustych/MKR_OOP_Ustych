#include <iostream>

using namespace std;

class Coffee
{
public:
    virtual void makeCoffee()
    {
        cout << "Кава";
    }
};

class MilkDecorator : public Coffee
{
private:
    Coffee* coffee;

public:
    MilkDecorator(Coffee* c)
    {
        coffee = c;
    }

    void makeCoffee() override
    {
        coffee->makeCoffee();
        cout << " + молоко";
    }
};

class SugarDecorator : public Coffee
{
private:
    Coffee* coffee;

public:
    SugarDecorator(Coffee* c)
    {
        coffee = c;
    }

    void makeCoffee() override
    {
        coffee->makeCoffee();
        cout << " + цукор";
    }
};

int main()
{
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "");

    Coffee basicCoffee;

    MilkDecorator milkCoffee(&basicCoffee);

    SugarDecorator sweetMilkCoffee(&milkCoffee);

    sweetMilkCoffee.makeCoffee();

    return 0;
}