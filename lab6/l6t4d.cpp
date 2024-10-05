#include <iostream>
#include <string>
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

    double temp_sum = 0;
    for (int i = 0; i < 7; ++i)
    {
        temp_sum += arr[i][0];
    }
    
    cout << temp_sum / 7;

    for (int i = 0; i < 7; ++i)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}