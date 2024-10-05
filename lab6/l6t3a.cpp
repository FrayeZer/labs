#include <iostream>
using namespace std;

int main()
{
    int n, num, count;
    cin >> n;
    int c_arr[n];

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
        count = 0;
        for (int j = 0; j < n; ++j)
        {
            if (arr[j][i] == 0)
            {
                count += 1;
            }
        }
        c_arr[i] = count;
    }

    for (int i : c_arr)
    {
        cout << i << " ";
    }
    return 0;
}