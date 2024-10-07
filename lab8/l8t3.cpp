#include <iostream>
#include <cmath>
using namespace std;

bool f(double x, double &res)
{
    if (x <= 2)
    {
        res = (double)(2 * x + (1 / (1 - x))) / (3 * x);
    }
    else if (x <= 5)
    {
        res = 10 + (double)2 / 7;
    }
    else
    {
        res = -3 - x;
    }
    return (isinf(res) ? false : true);
}

int main()
{
    double a, b, res1, res2, res3;
    cin >> a >> b;

    f(2.f, res1);
    f(0.f, res2);
    f(a, res3);

    cout << res1 - res2 * res3 << endl;

    f(2 * a, res1);
    f(6.f, res2);
    f(a * b, res3);

    cout << res1 - res2 + res3;

    return 0;
}