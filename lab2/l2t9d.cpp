#include <iostream>
using namespace std;

int main()
{
    float x, y;
    cin >> x >> y;

    if (y >= 0 && x >= 0 && y <= -2 * x + 2)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}