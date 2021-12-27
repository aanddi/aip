#include <iostream>
using namespace std;
void main()
{
	char st[6];
	char a;
	cout << "type characters and press Enter: ";
	cin >> st;

	a = st[0];
	st[0] = st[4]; //первый заменить последним
	st[4] = a;

	a = st[2];
	st[2] = st[4]; //последний третьим
	st[4] = a;

	a = st[0];
	st[0] = st[2];  //третий первым
	st[2] = a;

	cout << "the result is: " << st;
	cin.get();
	cin.get();
}