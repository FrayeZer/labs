#include <iostream>
using namespace std;

double sr_ar(double a, double b)
{
    return (a + b) / 2;
}

double sr_ar(double a, double b, double c)
{
    return (a + b + c) / 3;
}

double sr_ar(double a, double b, double c, double d)
{
    return (a + b + c + d) / 4;
}

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << sr_ar(a, b) << endl;
    cout << sr_ar(a, b, c) << endl;
    cout << sr_ar(a, b, c, d) << endl;

    return 0;
}