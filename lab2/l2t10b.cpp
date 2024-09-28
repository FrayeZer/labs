#include <iostream>
using namespace std;

int main()
{
    float x, y, z;
    cin >> x >> y >> z;

    if (x + y > z && x + z > y && y + z > x)
    {
        cout << "exists, ";
        if (x == y && x == z)
        {
            cout << "equilateral; ";
        }
        if (x == y && x == z && y == z)
        {
            cout << "Isosceles; ";
        }
        if (x * x + y * y == z * z || x * x + z * z == y * y || z * z + y * y == x * x)
        {
            cout << "right-angled;";
        }
    }
    else
    {
        cout << "doesn't exist.";
    }

    return 0;
}