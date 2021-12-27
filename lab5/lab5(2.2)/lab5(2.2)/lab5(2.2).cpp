#include <iostream>
using namespace std;
void main()
{
	double a, b, c, d, e, l;

	cout << "the first line: ";
	cin >> a >> b >> c;

	cout << "the second line: ";
	cin >> d >> e >> l;

	a = a + d;
	b = b + e;
	c = c + l;

	cout << "the result is: " << a << b << c;

	cin.get();
	cin.get();
}