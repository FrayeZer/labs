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
    return res;
}

int main()
{
    double arr[7], num;
    for (int i = 0; i < 7; ++i)
    {
        cin >> num;
        arr[i] = num;
    }

    double y, maxy = (double)INT_MIN, negco = 0;
    for (int i = 0; i < 7; ++i)
    {
        y = f(arr[i]);
        cout << y << " ";
        maxy = max(maxy, y);
        negco += (y >= 0 ? 0 : 1);
    }
    cout << endl;
    cout << maxy << endl
         << negco;
    return 0;
}