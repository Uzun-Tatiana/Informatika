#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, ""); // Включаем кириллицу

	/*
	//................Задание 1.1. Тип данных float................
	//знаменатель
	float a = 1000, b = 0.0001;
	float c = pow((a - b), 3);
	float d = pow(a, 3);
	//числитель
	float e = (pow(b, 3) - 3 * a * pow(b, 2))-(3 * pow(a, 2) * b);
	//значение выражения
	float f = (c - d) / e;
	cout << "Tип float. Выражение= " << f << endl;
	*/

	/*
	//................Задание 1.2. Тип данных double................
		//знаменатель
		double a = 1000, b = 0.0001;
		double c = pow((a - b), 3);
		double d = pow(a, 3);
		//числитель
		double e = (pow(b, 3) - 3 * a * pow(b, 2)) - 3 * pow(a, 2) * b;
		//значение выражения
		double f = (c - d) / e;
		cout << "Tип double. Выражение= " << f << endl;
    */


	//......................Задание 2. .............................

	int n = 0;
	int m = 0;

	//первое выражение
	int f = m + --n;
	cout << "m+--n = " << f << endl;

	// второе выражение
	if (++m > --n)
		cout << "++m > --n = true" << endl;
	else
	{
	}
	// третье выражение
	if (n-- < --m)
		cout << "n--< --m = true " << endl;
	else
	{
		cout << " n--< --m = false " << endl;
	}

}
