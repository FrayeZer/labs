#include <iostream>
using namespace std;

double rmax(double *arr, double *end)
{
    if (arr == end)
    {
        return *(arr - 1);
    }
    return max(*arr, rmax(arr + 1, end));
}

double rsmax(double *arr, double *end)
{
    if (arr == end)
    {
        return *(arr - 1);
    }
    if (*arr == rmax(arr, end))
    {
        return max(*(arr - 1), rsmax(arr + 1, end));
    }
    return max(*arr, rsmax(arr + 1, end));
}

double maxcount(double *arr, double *end, double maxval)
{
    if (arr == end)
    {
        return 0;
    }
    return ((*arr == maxval) + maxcount(arr + 1, end, maxval));
}

int main()
{
    double arr[8] = {1, 2, 5, 3, 4, 5, 5, 2};
    cout << maxcount(arr, end(arr), rmax(arr, end(arr))) << endl;
    return 0;
}