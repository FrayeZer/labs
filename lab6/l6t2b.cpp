#include <iostream>
using namespace std;

int main()
{
    int n, num, min1 = INT_MAX, min2 = INT_MAX;
    cin >> n;
    double *arr = new double[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> num;
        *(arr + i) = num;
    }

    for (int i = 0; i < n; ++i)
    {
        if (*(arr + i) < min1)
        {
            min1 = *(arr + i);
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (*(arr + i) > min1 && *(arr + i) < min2)
        {
            min2 = *(arr + i);
        }
    }
    cout << min2;
    return 0;
}