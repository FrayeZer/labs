#include <iostream>
using namespace std;

bool f(int *arr, int *end)
{
    if (*arr > 0)
    {
        return true;
    }
    if (end == arr)
    {
        return false;
    }
    return f(arr + 1, end);
}

int main()
{
    int arr1[5] = {-1, -2, -3, -4, 5};
    int arr2[5] = {-1, -2, -3, -4, -5};
    cout << f(arr1, end(arr1)) << endl;
    cout << f(arr2, end(arr2)) << endl;
    return 0;
}