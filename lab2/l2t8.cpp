#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x, y;
    cin >> x >> y;

    if (pow(x, 2) + pow(y, 2) <= 4)
    {
        cout << 10;
    }
    else if (pow(x, 2) + pow(y, 2) <= 16)
    {
        cout << 5;
    }
    else
    {
        cout << 0;
    }
}