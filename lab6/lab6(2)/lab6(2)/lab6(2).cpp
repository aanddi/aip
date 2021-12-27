#include<iostream>
#include <math.h> 
using namespace std;

void main()
{
	double a, b, c, p, s;

	setlocale(LC_ALL, "Russian");

	cout << "Сторона a = ";
	cin >> a;

	cout << "Сторона b = ";
	cin >> b;

	cout << "Сторона c = ";
	cin >> c;

	cout << "Полупериметр p =  ";
	cin >> p;

	s = sqrt(p * (p - a) * (p - b) * (p - c));

	cout << endl << "Площадь S =  " << s;

	cin.get();
	cin.get();
}

