#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x <= -2)
        cout << 0;
    else if (x <= 10)
        cout << x * x + 4 * x + 5;
    else
        cout << (float)1 / (x * x + 4 * x - 5);
}