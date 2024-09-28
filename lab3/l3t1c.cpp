#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    cout << "   x  |";
    for (float x = 0; x <= M_PI * 2; x += M_PI / 6)
    {
        cout << " " << x << " |";
    }
    cout << endl << "cos(x)|";
    for (float x = 0; x <= M_PI * 2; x += M_PI / 6)
    {
        cout << (cos(x) > 0 ? " " : "") << cos(x) << " |";
    }
    return 0;
}