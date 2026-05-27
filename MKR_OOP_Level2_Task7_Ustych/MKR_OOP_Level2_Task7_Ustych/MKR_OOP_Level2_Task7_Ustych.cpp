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

int main()
{
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "");

    Shape* shapes[2];

    Circle circle;
    Square square;

    shapes[0] = &circle;
    shapes[1] = &square;

    for (int i = 0; i < 2; i++)
    {
        shapes[i]->draw();
    }

    return 0;
}