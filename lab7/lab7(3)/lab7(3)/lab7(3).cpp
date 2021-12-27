#include<iostream>

using namespace std;

void main()
{
    char sign;
    double num1, num2, result;

    cout << "enter number 1: ";
    cin >> num1;

    cout << "enter sign: ";
    cin >> sign;

    cout << "enter number 2: ";
    cin >> num2;

    
    switch (sign)
    {
        case '+':
        {
            result = num1 + num2;
            break;
        }
        case '-':
        {
            result = num1 - num2;
            break;
        }
        case '*':
        {
            result = num1 * num2;
            break;
        }
        case '/':
        {
            result = num1 / num2;
            break;
        }
    }

    //проверка деление на 0
    if (sign = '/' && num1 == 0 || num2 == 0)
    {
        cout << "error: division by zero";
    }
    else
    {
        cout << endl << "result = " << result;
    }

    cin.get();
    cin.get();
}