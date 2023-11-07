
#include <iostream>
#include <math.h>

using namespace std;
int factorial(int k)//функция для нахождения факториала
{
	if (k == 0) {
		return 1;
	}
	else if (k > 0) {
		int SummaChisel = 1;
		for (int i = 1; i <= k; i++) {
			SummaChisel *= i;
		}
		return SummaChisel;//возвращаем значение 
	}
}
double S(double x, int n) //функция S(x)-находит сумму ряда 
{
	double sum = 0;
	for (int k = 0; k <= n; k++) {
		sum += pow(x, 2 * k) / factorial(2 * k);
	}
	return sum;
}
double Y(double x, double r)//функция Y(x)
{
	return ((exp(x) + exp(-x)) / 2);
}

int main() {
	setlocale(LC_ALL, "RU");
	double a;
	double h = 0.0001;//шаг с которым увеличивается x
	const double e = 0.001;//const которую мы используем для подсчета разности 
	int n = 0;
	int steps = 0;// переменная для подсчета количества шагов 
	cout << "введите начальное значения x: " << endl;
	cin >> a;
	double x = a;
	double summa = 0;
	summa += S(x, n);
	double rez = 0;
	rez += Y(x, rez);
	while (fabs(summa - rez) >= e) {

		cout << "количество шагов вычисления суммы: " << steps << endl;
		cout << "\tY(x)= " << rez << "\tS(x)=" << summa << "\tразность= " << fabs(summa - rez) << "\t" << x << endl;//таблица
		steps++;
		n++;
		x += h;
		summa = S(x, n);
		rez = Y(x, rez);
	}

}
