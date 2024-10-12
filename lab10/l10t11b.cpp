#include <iostream>
using namespace std;

bool are_positives_here(int *arr, int *end)
{
    if (*arr > 0)
    {
        return true;
    }
    if (end == arr)
    {
        return false;
    }
    return are_positives_here(arr + 1, end);
}

bool is_bigger_here(int *arr, int *end, int num)
{

    if (*arr > num)
    {
        return true;
    }
    if (end == arr)
    {
        return false;
    }
    return is_bigger_here(arr + 1, end, num);
}

int main()
{

    int arr1[5] = {1, -2, 3, -4, 5};
    int arr2[5] = {-1, -2, -3, -4, -5};
    cout << is_bigger_here(arr1, end(arr1), 10) << endl;
    cout << is_bigger_here(arr2, end(arr2), -3) << endl;
    return 0;
}