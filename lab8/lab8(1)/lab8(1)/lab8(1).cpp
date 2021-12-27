#include <iostream>
using namespace std;

void main()
{
    int j, i, s = 0;

    for (i = 2; ; i = i + 2)
    {
        cin >> j;

        if (j > 0)
            s = s + (i * j);

        else
            cout << s << endl;
    }

    cin.get();
    cin.get();
}
