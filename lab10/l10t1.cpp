#include <iostream>
using namespace std;

void rec(int n)
{
    if (n >= 1)
    {
        rec(n - 1);
        cout << n << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    rec(n);
    return 0;
}