#include <iostream>
using namespace std;

class Figure
{
protected:
    int x, y;
    double angle;
    double scale;

public:
    Figure(int xCoord, int yCoord, double a, double s)
    {
        x = xCoord;
        y = yCoord;
        angle = a;
        scale = s;
    }

    virtual void draw() = 0;

    virtual void hide()
    {
        cout << "Фігуру зроблено невидимою" << endl;
    }

    virtual void rotate(double degrees)
    {
        angle += degrees;
        cout << "Фігуру повернуто на " << degrees << " градусів" << endl;
    }

    virtual void move(int dx, int dy)
    {
        x += dx;
        y += dy;
        cout << "Фігуру переміщено у точку (" << x << "; " << y << ")" << endl;
    }

    virtual ~Figure() {}
};

class Triangle : public Figure
{
public:
    Triangle(int x, int y, double a, double s)
        : Figure(x, y, a, s) {
    }

    void draw() override
    {
        cout << "Зображено трикутник" << endl;
    }
};

class Quadrangle : public Figure
{
public:
    Quadrangle(int x, int y, double a, double s)
        : Figure(x, y, a, s) {
    }

    void draw() override
    {
        cout << "Зображено чотирикутник" << endl;
    }
};

class Polygon : public Figure
{
public:
    Polygon(int x, int y, double a, double s)
        : Figure(x, y, a, s) {
    }

    void draw() override
    {
        cout << "Зображено многокутник" << endl;
    }
};

int main()
{
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "");

    Triangle triangle(0, 0, 0, 1);
    Quadrangle quadrangle(10, 10, 0, 1);
    Polygon polygon(20, 20, 0, 1);

    Figure* figures[3];

    figures[0] = &triangle;
    figures[1] = &quadrangle;
    figures[2] = &polygon;

    for (int i = 0; i < 3; i++)
    {
        figures[i]->draw();
        figures[i]->rotate(45);
        figures[i]->move(5, 5);
        figures[i]->hide();
        cout << endl;
    }

    return 0;
}