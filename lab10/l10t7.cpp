#include <iostream>
#include <cmath>
using namespace std;

double rec(int n)
{
    if (n > 1)
    {
        return sqrt(rec(n - 1) + 2);
    }
    return sqrt(2);
}

int main()
{
    int n;
    cin >> n;
    cout << rec(n) << endl;
}