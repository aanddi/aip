#include <iostream>

using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");

    char ch;
    double k = 0;

    cout << "Введите последовательность цифр: " << endl;

    do
    {
        cin >> ch;

        if (ch != '.')
        {
            k++;
            cout << "ASCII-код: " << (int)ch << endl << endl;
        }
    } while (ch != '.');

    cout << "Результат: " << k;

    cin.get();
    cin.get();
}
