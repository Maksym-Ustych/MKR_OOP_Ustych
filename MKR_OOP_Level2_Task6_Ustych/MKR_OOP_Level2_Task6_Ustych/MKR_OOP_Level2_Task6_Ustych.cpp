#include <iostream>

using namespace std;

class Animal
{
public:
    virtual void sound() = 0;
};

class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Собака гавкає" << endl;
    }
};

class AnimalFactory
{
public:
    static Animal* createDog()
    {
        return new Dog();
    }
};

int main()
{
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "");

    Animal* animal;

    animal = AnimalFactory::createDog();

    animal->sound();

    delete animal;

    return 0;
}