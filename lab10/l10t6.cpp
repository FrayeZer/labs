#include <iostream>
using namespace std;

int rec(int a, int b)
{
    if (b > 0)
    {
        return a + rec(a, b - 1);
    }
    return 0;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << rec(a, b) << endl;
    return 0;
}