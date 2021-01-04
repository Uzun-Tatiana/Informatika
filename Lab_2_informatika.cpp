#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(0, ""); // Включаем кириллицу
	double eps = 0.001; // точность
	double an, sum; // текущий an и текущая сумма ряда
	double n; // текущий номер члена ряда
	an = 1;
	sum = 0;
	n = 0;
	// сумму ряда будем вычислять в цикле while
	while (an > eps)

	{
		n++;
		an = 1 / ((3 * n - 2) * (3 * n + 1));
		sum += an;
	}
	cout << " Число членов суммы  -  " << n << endl;
	cout << " Сумма ряда -  " << sum << endl;
	cout << " Значение текущего члена ряда -  " << an << endl;
}
