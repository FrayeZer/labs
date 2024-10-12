#include <iostream>
using namespace std;

int rmin(int *arr, int *end)
{
    return (arr[0] <= *(end - 1) ? arr[0] : *(end - 1));
}

int main()
{
    int arr1[] = {-10, -5, -3, -2, 0, 2, 8, 15, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29};
    int arr2[] = {10, 9, 8, 7, 6, 5, 3, 1, -1};

    cout << rmin(arr1, end(arr1)) << endl;
    cout << rmin(arr2, end(arr2));
    return 0;
}