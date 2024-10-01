#include <iostream>
using namespace std;

int main()
{
    int n;
    n = 10;

    int arr[n][n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {

            if (j < n / 2 && i < n / 2)
            {
                arr[i][j] = n / 2 - (n % 2 == 0 ? 1 : 0) - i + (j < i ? i - j : 0);
            }
            else if (j >= n / 2 & i < n / 2)
            {
                arr[i][j] = arr[i][n - j - 1];
            }
            else if (j < n / 2 && i >= n / 2)
            {
                arr[i][j] = arr[n - i - 1][j];
            }
            else
            {
                arr[i][j] = arr[i][n - j - 1];
            }
            
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}