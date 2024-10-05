#include <iostream>
using namespace std;

int main()
{
    int n, num, count = 0;
    cin >> n;

    double **arr = new double *[n];
    for (int i = 0; i < n; ++i)
    {
        arr[i] = new double[n];
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> num;
            arr[i][j] = num;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = n - 1 - i; j > i; --j)
        {
            if (arr[i][j] > 0)
            {
                count += 1;
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}