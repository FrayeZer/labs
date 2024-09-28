#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, a, ans;
    cin >> x;

    if (x <= -2)
        cout << 0;
    else if (x <= 10)
        cout << x * x + 4 * x + 5;
    else
    {
        a = x * x + 4 * x - 5;
        cout << (isnan(a) ? "0" : to_string((float)1 / a));
    }
}