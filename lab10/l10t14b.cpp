#include <iostream>
using namespace std;

int sum_negatives(int *arr, int left, int right)
{
    if (left > right)
    {
        return 0;
    }
    int mid = (left + right) / 2;
    return sum_negatives(arr, left, mid - 1) + (arr[mid] < 0 ? arr[mid] : 0) + sum_negatives(arr, mid + 1, right);
}

int main()
{
    int arr[] = {-10, -5, -3, -2, 0, 2, 8, 15, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Сумма отрицательных: " << sum_negatives(arr, 0, n - 1) << endl;

    return 0;
}
