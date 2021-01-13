#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

long double fact(int N)
{
    if (N < 0)
        return 0;
    if (N == 0)
        return 1;
    else
        return N * fact(N - 1);
}
int main()
{
    int n = 10;
    double e = 0.0001;
    double y = 0, SN = 0, SE = 0, a = 0, b = 0;


    for (double x = 0.1; x < 1; x += 0.09)
    {
        //SN
        SN = 1;
        for (int i = 1; i <= n; i++)
        {
            a = pow(x, 2 * i) / fact(2 * i);
            if (i % 2 != 0)
                a *= -1;
            SN += a;
        }

        //SE
        SE = 1;
        double past = 0;
        int iter = 1;
        do
        {
            past = b;
            b = pow(x, 2 * iter) / fact(2 * iter);
            if (iter % 2 != 0)
                b *= -1;
            SE += b;
            iter++;
        } while (abs(b - past) > e);

        //Y
        y = cos(x);

        cout << "X = " << fixed << setprecision(2) << x;
        cout << setw(10) << fixed << setprecision(7) << "SN = " << SN;
        cout << setw(10) << fixed << setprecision(7) << "SE = " << SE;
        cout << setw(10) << fixed << setprecision(7) << "Y = " << y << endl;
    }
    return 0;
}
