#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");

    double num;

    cout << "Введите произвольное число: ";
    cin >> num;

    if (num < 10)
    {
        cout << "Это число меньше 10" << endl;
    }

    else if (num == 10)
    {
        cout << "Это число равно 10";
    }

    else
    {
        cout << "Это число больше 10" << endl;
    }

    cin.get();
    cin.get();
}