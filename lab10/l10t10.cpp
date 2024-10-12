#include <iostream>
using namespace std;

int sumdigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int c = n % 10;
    return c + sumdigits(n / 10);
}

int main()
{
    int n;
    cin >> n;
    cout << sumdigits(n);
    return 0;
}