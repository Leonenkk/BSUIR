#include <iostream>
#include <math.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    double a, z1, z2;
    cout << "enter num a" << endl;
    if (cin >> a) {
        cout << " a = " << a << endl;
    }
    else {
        cout << "error" << endl;
        return 0;//остановка 
    }
    if (a > 0 && (a - sqrt(2 * a)) != 0) {
        z1 = (((a + 2) / sqrt(2 * a)) - (a / (sqrt(2 * a) + 2)) + (2 / (a - sqrt(2 * a))) * ((sqrt(a) - sqrt(2)) / (a + 2)));
        z2 = 1 / (sqrt(a) + sqrt(2));
        cout << z1 << endl;
        cout << z2 << endl;
    }
    else
        cout << "error";
}