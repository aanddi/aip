#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int val, s = 0;

    while (s <= 100)
    {
        cout << "number: ";
        cin >> val;

        if (val < 0)
        {
            s = s + pow(val, 2);
        }

        else if (val > 0)
        {
            s = s + val;
        }

        if (s > 100)
        {
            break;
        }

        cout << "s = " << s << "  ";
    }


    cin.get();
    cin.get();
}