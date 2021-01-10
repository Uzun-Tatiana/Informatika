#pragma warning (disable : 4996)
#include <iostream>
#include <windows.h>
#include <algorithm>
#include<iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Печать предмета, количества сдающих и среднего бала
void PrintList(const char* predmtet = "Неизвестно",
	const char* kol = "Неизвестно", float sb = 0)
{
	cout << "Предмет: " << predmtet << endl;
	cout << "Количество сдающих: " << kol << endl;
	cout << "Средний бал: ";
	if (sb == 0)
		cout << "Неизвестно" << endl;
	else
		cout << sb << endl;
	cout << endl;
}
//Нахождение минимального из элементов в списке параметров, стоящих на четных местах
int mins(int a, ...)
{
	int* p = &a;
	p++;
	int result = 100;
	while (a)
	{
		if (*p < result  && a % 2)
			result = *p;
		a--;
		p++;
	}
	return result;
}
//Сортировка массива методоп простых включений
void InsertSort(int *num, int size) 
{

	for (int i = 1; i < size; i++) {
		
		int value = num[i];
		int index = i;
		while ((index > 0) && (num[index - 1] > value)) {

			num[index] = num[index - 1];
			index--;
		}
		num[index] = value;
	}
}



//Метод итераций
double f(double x)// Объявляем функцию
{
	double fx = (x - (1/(3+sin(3.6*x))));
	return fx;
}
double Iteration(double a, double b, double e, int *n)
{
	double x0 = (a + b) / 2;
	double xn = x0 - 0.7143 * ((x0 - (1 / (3 + sin(3.6 * x0)))));

	while ((x0 - xn) <= e)
	{
		x0 = xn;
		xn = x0 - 0.7143 * ((x0 - (1 / (3 + sin(3.6 * x0)))));
		(*n)++;
		break;
	}
	return xn;
	
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "--------Задание 1--------" << endl;
	PrintList("Информатика", "17", 4);
	PrintList();
	PrintList("Математика", "17", 3.5);
	cout << "--------Задание 2--------" << endl;
	cout << "Элементы: 1, 3, 8, 6, 9, 5, 7" << endl;
	cout << "Минимальный элемент: " << mins(1, 3, 8, 6, 9, 5, 7) << endl;
	cout << endl;
	cout << "--------Задание 3--------" << endl;
	int array[10] = {44, 56, 58, 25, 12, 36, 54, 78, 22, 58};
	cout << "Не сортированный массив" << endl;

	for (int i = 0; i < 10; i++) {
		cout << array[i] << ' ';
	}
	cout << endl;

	cout << "Сортированный массив" << endl;
	InsertSort(array, 10);
	for (int i = 0; i < 10; i++) {
		cout << array[i] << ' ';
	}

	cout << endl;
	cout << "--------Задание 4--------" << endl;
	const double a = 0, b = 0.85, e = 0.2624;
	int n = 0;
	cout << "Дано уравнение: fx = (x - (1/(3+sin(3.6*x))))" << "\n\n";
	cout << "Метод простых итераций..." << endl << fixed << setprecision(6) << "x = " << Iteration(a, b, e, &n) << "\n\n";
	cout << "Число итераций - " << n << endl;
	cout << endl;
	return 0;
}