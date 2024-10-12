#include <iostream>
using namespace std;

int rec(int a, int b)
{
    if (b > 0)
    {
        return rec(a + 1, b - 1);
    }
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << rec(a, b);
    return 0;
}