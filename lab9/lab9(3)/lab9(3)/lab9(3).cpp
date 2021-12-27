#include <iostream>

using namespace std;

void main()
{
    double s = 0, p = 0, i = 0;

    setlocale (LC_ALL, "Russian");

    while (true)
    {
        cout << "Введите последовательность чисел: ";
        cin >> i;

        if (i == 0)
        {
            

            break;
        }
        else
        {
            if (i > 10 && i < 25)
            {
                s = s + i;
            }
            if (i > 15)
            {
                p = p * i;
            }
        }
    }

    if (s > p)
    {
        cout << "Результат: " << s;
    }
    else
    {
        cout << "Результат: " << p;
    }

    cin.get();
    cin.get();
}

