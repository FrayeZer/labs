#include <iostream>
using namespace std;

double *ptr_rmax(double *arr, double *end)
{
    double *ptr = arr;
    for (int i = 1; arr + i < end; ++i)
    {
        if (arr[i] > *ptr)
        {
            ptr = &(arr[i]);
        }
    }
    return ptr;
}

double rmax(double *arr, double *end)
{
    if (arr == end)
    {
        return *(arr - 1);
    }
    return max(*arr, rmax(arr + 1, end));
}

void bad_sort(double *arr, double *end)
{
    if (arr == end - 1)
    {
        return;
    }
    swap(*ptr_rmax(arr, end), *arr);
    bad_sort(arr + 1, end);
}

int main()
{
    double arr[5] = {1.f, 2.f, 5.f, 3.f, 4.f};
    bad_sort(arr, end(arr));
    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }
    return 0;
}