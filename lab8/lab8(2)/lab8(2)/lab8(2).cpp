#include <iostream>
using namespace std;

int main()
{
	int n, i;
	long double t, a, f = 0;

	cout << "enter n: ";
	cin >> n;

	cout << "enter t: ";
	cin >> t;

	for (i = 0; i <= n; i++)
	{
		cout << "enter a: ";
		cin >> a;

		for (int g = n - i; g >= 0; g--)
		{
			t *= t;
		}

		f = f + a * t;
	}

	cout << "f = " << f;

	cin.get();
	cin.get();
}

