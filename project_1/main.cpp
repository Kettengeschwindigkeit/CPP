#include <iostream>
using namespace std;

/*
	Переменная - это область оперативной памяти, обладающая собственным именем и предназначенная для хранения данных разных типов, которые могут быть изменены
*/

void main()
{
	setlocale(LC_ALL, "Rus");

	int a;
	a = 5;

	int b = 7;

	cout << a << endl;
	cout << b << endl;

	a = 10;

	cout << a << endl;

	int Age, c, d, e = 6565;

	Age = 10;
	c = 1;
	d = 2;

	cout << Age << " " << c << " " << d << " " << e << endl;

	double f = 1.1551;
	char g = 'g';

	cout << f << " " << g << endl;

	bool h = true;
	bool i = false;

	cout << h << " " << i << endl;
}
