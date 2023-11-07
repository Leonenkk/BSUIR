#include <iostream>
#include <math.h>


using namespace std;

double x, y, z;
double max1(double x, double y) {
	if (x > y)
		return x;
	else if (y > x)
		return y;
}
double minimum(double x, double y, double z) {
	if (x < y && x < z)
		return x;
	else if (z < y && z < x)
		return z;
	else if (y < x && y < z)
		return y;

}
int main() {
	setlocale(LC_ALL, "RUS");
	cout << "Введите значения переменных x,y,z" << endl;
	cin >> x;
	cin >> y;
	cin >> z;
	if (cin.fail()) {
		cout << "error";
		exit(0);
	}
	if (minimum(x, y, z) == 0) {
		cout << "error" << endl;
		exit(0);
	}
	else {
		cout << "min=" << minimum(x, y, z) << endl;
	}
	cout << "max=" << max1(max1(x, y), max1(y, z)) << endl;
	cout << "m=" << max1(max1(x, y), max1(y, z)) / minimum(x, y, z);
	return 0;
}
