#include <iostream>
#include <cmath>
using namespace std;

double f(double x)
{
    return x * x * x + 1;
}

double Root(double (*f)(double), double a, double b, double eps)
{
    double m = (a + b) / 2;
    if (-eps < f(m) && f(m) < eps)
    {
        return m;
    }
    return (f(a) * f(m) > 0 ? Root(f, m, b, eps) : Root(f, a, m, eps));
}

int main()
{
    double a, b, eps;
    cin >> a >> b >> eps;
    cout << Root(f, a, b, eps);
    return 0;
}