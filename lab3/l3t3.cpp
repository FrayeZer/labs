#include <iostream>
using namespace std;

int main()
{
    int n;
    float sum = 0.f;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        sum += (float)1 / (2 * i);
    }
    cout << sum;
    return 0;
}
