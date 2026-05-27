#include <iostream>
using namespace std;

template <typename T>
class Matrix
{
private:
    T** data;
    int rows;
    int cols;

public:
    Matrix(int r, int c)
    {
        rows = r;
        cols = c;

        data = new T * [rows];

        for (int i = 0; i < rows; i++)
        {
            data[i] = new T[cols];
        }
    }

    ~Matrix()
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] data[i];
        }

        delete[] data;
    }

    void input()
    {
        cout << "Введіть елементи матриці:" << endl;

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cin >> data[i][j];
            }
        }
    }

    void output()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << data[i][j] << " ";
            }

            cout << endl;
        }
    }

    void copyByRows()
    {
        cout << "Копіювання за рядками:" << endl;

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << data[i][j] << " ";
            }

            cout << endl;
        }
    }

    void copyByColumns()
    {
        cout << "Копіювання за стовпцями:" << endl;

        for (int j = 0; j < cols; j++)
        {
            for (int i = 0; i < rows; i++)
            {
                cout << data[i][j] << " ";
            }

            cout << endl;
        }
    }

    void copyRow(int row)
    {
        cout << "Копіювання вибраного рядка:" << endl;

        for (int j = 0; j < cols; j++)
        {
            cout << data[row][j] << " ";
        }

        cout << endl;
    }

    void copyColumn(int col)
    {
        cout << "Копіювання вибраного стовпчика:" << endl;

        for (int i = 0; i < rows; i++)
        {
            cout << data[i][col] << " ";
        }

        cout << endl;
    }

    void copyMainDiagonal()
    {
        cout << "Копіювання головної діагоналі:" << endl;

        int n = rows < cols ? rows : cols;

        for (int i = 0; i < n; i++)
        {
            cout << data[i][i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "");

    Matrix<int> matrix(3, 3);

    matrix.input();

    cout << endl << "Початкова матриця:" << endl;
    matrix.output();

    cout << endl;
    matrix.copyByRows();

    cout << endl;
    matrix.copyByColumns();

    cout << endl;
    matrix.copyRow(1);

    cout << endl;
    matrix.copyColumn(2);

    cout << endl;
    matrix.copyMainDiagonal();

    return 0;
}