#include <iostream>

using namespace std;

class Printer
{
public:
    virtual void print() = 0;
};

class Scanner
{
public:
    virtual void scan() = 0;
};

class SimplePrinter : public Printer
{
public:
    void print() override
    {
        cout << "Друк документа" << endl;
    }
};

class MFP : public Printer, public Scanner
{
public:
    void print() override
    {
        cout << "Друк документа" << endl;
    }

    void scan() override
    {
        cout << "Сканування документа" << endl;
    }
};

int main()
{
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "");

    SimplePrinter printer;
    printer.print();

    MFP device;
    device.print();
    device.scan();

    return 0;
}