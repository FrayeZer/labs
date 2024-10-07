#include <iostream>
#include <cmath>
using namespace std;

double S(double a, double h)
{
    cout << "По стороне и высоте" << endl;
    return a * h / 2;
}
double S(double a, double b, double c)
{
    cout << "По 3 сторонам" << endl;
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
double S(long a, long b, long c)
{
    cout << "По 2 сторонам и синусу" << endl;
    return a * b * sin(c * M_PI / 180) / 2;
}

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (long(a) == a && long(b) == b && long(c) == c)
    {
        cout << S(long(a), long(b), long(c));
    }
    else
    {
        cout << S(a, b, c);
    }
    return 0;
}