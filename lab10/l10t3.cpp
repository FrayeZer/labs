#include <iostream>
using namespace std;

int rec(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return 1 + rec(n / 10);
}

int main()
{
    int n;
    cin >> n;
    cout << rec(n);
    return 0;
}