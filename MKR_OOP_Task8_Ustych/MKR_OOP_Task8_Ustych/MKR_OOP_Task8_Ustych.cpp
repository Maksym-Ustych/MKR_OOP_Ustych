#include <iostream>

using namespace std;

class Circle;
class Square;

class Visitor
{
public:
    virtual void visitCircle(Circle* c) = 0;
    virtual void visitSquare(Square* s) = 0;
};

class Shape
{
public:
    virtual void accept(Visitor* v) = 0;
};

class Circle : public Shape
{
public:
    void accept(Visitor* v) override
    {
        v->visitCircle(this);
    }
};

class Square : public Shape
{
public:
    void accept(Visitor* v) override
    {
        v->visitSquare(this);
    }
};

class DrawVisitor : public Visitor
{
public:
    void visitCircle(Circle* c) override
    {
        cout << "Малювання круга" << endl;
    }

    void visitSquare(Square* s) override
    {
        cout << "Малювання квадрата" << endl;
    }
};

int main()
{
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "");

    DrawVisitor visitor;

    Circle circle;
    Square square;

    circle.accept(&visitor);
    square.accept(&visitor);

    return 0;
}