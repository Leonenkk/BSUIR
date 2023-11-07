#include <iostream>
#include <math.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	double x, a, b, c, d, z1, z2;
	cout << "введите значение x:";
	cin >> x;
	a = 1 - 2 * pow(sin(x), 2);
	b = 1 + sin(2 * x);
	c = 1 - tan(x);
	d = 1 + tan(x);
	z1 = a / b;
	z2 = c / d;
	cout << "значение z1: " << z1 << endl;
	cout << "значение z2:" << z2 << endl;

}