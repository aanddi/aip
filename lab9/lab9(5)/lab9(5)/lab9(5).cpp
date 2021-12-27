#include <iostream>

using namespace std;
int main()
{
    int ch, min, sec, tm;

    setlocale(LC_ALL, "Russian");

    cout << "Введите время в часах: ";
    cin >> ch;

    cout << "Введите время в минутах: ";
    cin >> min;

    cout << "Введите время в секундах: ";
    cin >> sec;

    cout << endl;

    if ((ch >= 0) && (min >= 0) && (sec >= 0))
    {
        ch = ch * 3600;
        min = min * 60;

        tm = ch + min + sec;

        cout << "Время: " << tm << " секунд";
    }
    else
    {
        cout << endl << "Введите корректное время!" << endl;
    }

    cin.get();
    cin.get();
}