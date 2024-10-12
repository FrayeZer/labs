#include <iostream>
using namespace std;

int sum_negatives(int *arr, int left, int right, int W)
{
    if (left > right)
    {
        return 1;
    }
    int mid = (left + right) / 2;
    return sum_negatives(arr, left, mid - 1, W) * (arr[mid] * arr[mid] < W ? arr[mid] : 1) * sum_negatives(arr, mid + 1, right, W);
}

int main()
{
    int arr[] = {-10, -5, -3, -2, 2, 8, 15, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << sum_negatives(arr, 0, n - 1, 200) << endl;

    return 0;
}
