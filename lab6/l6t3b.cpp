#include <iostream>
using namespace std;

int main()
{
    int n, num, mult = 1;
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
        mult *= arr[i][n - 1 - i];
        delete[] arr[i];
    }
    delete[] arr;
    cout << mult;
    return 0;
}