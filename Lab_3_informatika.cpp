#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int n = 10;
   float e = 0.0001;
   float y = 0, SN = 0, SE = 0, a = 0, b = 0;
  

    for (float x = 0.1; x < 1; x += 0.09)
    {
        a = x; 
        SN = a;

        for (int i = 0; i < n - 1; i++)
        {
            a *= ((-1) * x / ((2 * i + 2) * (2 * i + 3)));
            SN += a;
        }

        b = x;
        SE = b;
        y = cos(x);
       
        for (int j = 0; abs(b - SE) < e; j++)
        {
            b *= ((-1)  * x / ((2 * j + 2) * (2 * j + 3)));
            SE += b;
        }

        cout << "X = " << fixed << setprecision(2) << x;
        cout << setw(10) << fixed << setprecision(7) << "SN = " << SN;
        cout << setw(10) << fixed << setprecision(7) << "SE = " << SE;
        cout << setw(10) << fixed << setprecision(7) << "Y = " << y << endl;
    }
    return 0;
}
