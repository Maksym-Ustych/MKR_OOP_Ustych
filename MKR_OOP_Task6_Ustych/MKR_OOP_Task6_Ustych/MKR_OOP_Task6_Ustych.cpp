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

class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "Кіт нявкає" << endl;
    }
};

class AnimalFactory
{
public:
    static Animal* createAnimal(int type)
    {
        if (type == 1)
            return new Dog();

        if (type == 2)
            return new Cat();

        return nullptr;
    }
};

int main()
{
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "");

    Animal* animal;

    animal = AnimalFactory::createAnimal(1);

    animal->sound();

    delete animal;

    return 0;
}