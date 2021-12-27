#include <iostream>
#include <math.h>

using namespace std;
void main()
{
	double x, y, k;

	cout << "enter number 1: ";
	cin >> x; 

	cout << "enter number 2: ";
	cin >> y; 

	k = (-x + sqrt(pow(x, 2) + 3 * y)) / (2 * y);
	cout << "result of example 1.1: " << k << endl;

	k = sqrt((3 + x * y) / (4 * pow(x, 2)));
	cout << "result of example 1.2: " << k << endl;

	k = 6 - abs(x - 3 * y) / sqrt(5 - pow(y, 2));
	cout << "result of example 1.3: " << k << endl;

	k = exp(x + 7) * sqrt(37 * y - pow(x, 3));
	cout << "result of example 1.4: " << k << endl;

	k = sin(x) + (pow(y, 2) / (cos(2 * x) + 23));
	cout << "result of example 1.5: " << k << endl;

	k = tan(y) - abs(x - 3 * y + 2 / sqrt(y + 4));
	cout << "result of example 1.6: " << k;

	cin.get();
	cin.get();
}