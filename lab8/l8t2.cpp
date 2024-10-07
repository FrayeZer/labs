#include <iostream>
#include <cmath>
using namespace std;

double *sol(double *a, double *b, double *c)
{
    double *arr = new double[2];

    double D = (*b) * (*b) - 4 * (*a) * (*c);
    if (D >= 0)
    {
        arr[0] = -1 * (*b) - sqrt(D) / (2 * (*a));
        arr[1] = -1 * (*b) + sqrt(D) / (2 * (*a));
    }
    else
    {
        arr[0] = NAN;
        arr[1] = NAN;
    }

    return arr;
}

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double *ans = sol(&a, &b, &c);
    for (int i = 0; i < 2; ++i)
    {
        if (isnan(*ans))
        {
            cout << "Решений нет";
            break;
        }
        cout << *(ans + i) << endl;
    }
    delete[] ans;
    return 0;
}