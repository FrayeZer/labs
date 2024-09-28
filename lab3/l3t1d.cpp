#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(3);
    for (float x = -1.5; x <= 1.5; x += 0.25)
    {
        float res;
        if (x > 1)
        {
            res = 1 + sqrt(abs(cos(x)));
        }
        else if (x >= -0.5)
        {
            res = 1 + x;
        }
        else
        {
            res = 1 - pow(x, 2);
        }
        cout << x << " -> " << res << endl;
    }
    return 0;
}