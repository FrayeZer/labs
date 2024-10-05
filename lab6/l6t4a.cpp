#include <iostream>
using namespace std;

int main()
{
    int n, num;
    cout << "Кол-во замеров в день = ";
    cin >> n;
    float **arr = new float *[7];
    for (int i = 0; i < 7; ++i)
    {
        arr[i] = new float[n];
        for (int j = 0; j < n; ++j)
        {
            cin >> num;
            arr[i][j] = num;
        }
    }

    float minnum = (float)INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        minnum = min(minnum, arr[0][i]);
    }

    cout << minnum;
    return 0;
}