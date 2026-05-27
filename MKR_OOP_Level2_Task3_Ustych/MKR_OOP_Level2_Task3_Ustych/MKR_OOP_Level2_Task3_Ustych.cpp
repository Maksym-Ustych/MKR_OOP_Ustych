#include <iostream>

using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Малювання круга" << endl;
    }
};

class Square : public Shape
{
public:
    void draw() override
    {
        cout << "Малювання квадрата" << endl;
    }
};

class Triangle : public Shape
{
public:
    void draw() override
    {
        cout << "Малювання трикутника" << endl;
    }
};

int main()
{
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "");

    Shape* shapes[3];

    Circle c;
    Square s;
    Triangle t;

    shapes[0] = &c;
    shapes[1] = &s;
    shapes[2] = &t;

    for (int i = 0; i < 3; i++)
    {
        shapes[i]->draw();
    }

    return 0;
}