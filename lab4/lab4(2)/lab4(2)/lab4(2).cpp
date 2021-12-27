#include <iostream>
using namespace std;
void main()
{
	double x, y;
	char z;

	cout << "first number: ";
	cin >> x;

	cout << "second number: ";
	cin >> y;

	cout << "operation: ";
	cin >> z;

	if (z == '+')
	{
		cout << "result: " << x + y;
	}
	else if (z == '-')
	{
		cout << "result: " << x - y;
	}
	else
	{
		cout << "error";
	}
	cin.get();
	cin.get();
}