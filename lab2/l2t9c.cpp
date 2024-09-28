#include <iostream>
using namespace std;

int main()
{
    float x, y;
    cin >> x >> y;

    if (x >= 0 && x * x + y * y <= 36 && x * x + y * y >= 9)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}