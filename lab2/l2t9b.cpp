#include <iostream>
using namespace std;

int main()
{
    float x, y;
    cin >> x >> y;

    if (y >= 0 && x * x + y * y <= 25)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}