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

    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 5; j < 7; ++j)
        {
            if (arr[j][i] < 0)
            {
                count += 1;
            }
        }
    }

    for (int i = 0; i < 7; ++i)
    {
        delete[] arr[i];
    }
    delete[] arr;

    cout << count;
    return 0;
}