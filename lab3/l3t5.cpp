#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double e, val;
    int i = 1;
    cin >> e;
    int sign = 1;

    while (1.f / i >= e)
    {
        val += 1.f / i * sign;
        i += 2;
        sign = (sign > 0 ? -1 : 1);
    }
    cout << val << endl;
    cout << "focus value: " <<M_PI / 4;
    return 0;
}