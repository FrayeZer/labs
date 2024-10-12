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

bool not_in(int *arr1, int *end1, int *arr2, int *end2)
{
    if (*arr1 == *arr2)
    {
        return false;
    }
    if (arr1 == end1 || arr2 == end2)
    {
        return true;
    }
    return (not_in(arr1 + 1, end1, arr2, end2) && not_in(arr1, end1, arr2 + 1, end2));
}

int main()
{

    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {-1, -2, -3, -4, -5};
    int arr3[5] = {1, 2, 3, -4, 5};
    cout << not_in(arr1, end(arr1), arr2, end(arr2)) << endl;
    cout << not_in(arr2, end(arr2), arr3, end(arr3)) << endl;
    return 0;
}