#include <cstdlib>
#include <iostream> 
#include <math.h>
#define A 0.1 // константа а
#define B 1.0 // константа и
#define E 0.0001 // константа е

int main()
{
    setlocale(0, ""); // Включаем кириллицу

    float x, k = (B - A) / 10.0, sn = 0, se = 0, t, y; // все значения 
    int i, j = 1, n = 10; // значения степени в разных циклах

    for (x = A; x <= B; x += k)// задаем интервал и шаг вычислений
    {
        sn = x; se = x;

        for (i = 1; i <= n; i++)// вычисляем функцию при н
        {
            sn += (pow(-1, i) * pow(x, 2 * i) / (2 * i));
        }

        do {
            t = (pow(-1, j) * pow(x, 2 * j) / (2 * j));// вычисляем функцию с точностью е
            j++;
            se += t;
        }

        while (t > E);// вычисляем саму функцию
        y = cos(x);

        printf("x=%.2f SN=%f SE=%f Y=%f\n", x, sn, se, y);// выводим все 10 циклов с новой строки

    }
}
