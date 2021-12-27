#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");

    int x, y;

    cout << "введите координаты точки: " << endl;

    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    if ((x == 1 && y == 1) || (x == -1 && y == 1) || (x == 1 && y == -1) || (x == -1 && y == -1) || (x == -1 && y == 0) || (x == 0 && y == -1))
    {
        cout << "Эта точка относится к области";
    }

    else
    {
        cout << "Эта точка не относится к области";
    }

    cin.get();
    cin.get();

}