#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    float x, temp_value;
    cin >> n >> x;

    temp_value = cos(x);
    for (int i = 2; i <= n; ++i)
    {
        temp_value = cos(x + temp_value);
    }

    cout << temp_value;
    return 0;
}