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

int main()
{
    double arr[5] = {1.f, 2.f, 5.f, 3.f, 4.f};
    cout << rmax(arr, end(arr)) << endl;
    return 0;
}