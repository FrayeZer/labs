#include <iostream>
#include <cmath>
using namespace std;

double f(double x)
{
    double res;
    if (x < 0)
    {
        res = 2 + (double)1 / 3;
    }
    else if (x < 2 * M_PI)
    {
        res = pow(x, 2) - 3;
    }
    else
    {
        res = (pow(x, 3) + 1) / (2 * x);
    }
}

int main()
{
    double a, b;
    cin >> a >> b;
    cout << 12.5 + f(2) - (f(4) * f(10)) + f(a) - f(b) + f(a * b);
    return 0;
}