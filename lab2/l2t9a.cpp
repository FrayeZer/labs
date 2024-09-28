#include <iostream>
using namespace std;

int main()
{
    float x, y;
    cin >> x >> y;

    if (-2 <= x && x <= 0 && 1 >= y && y >= 0)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}