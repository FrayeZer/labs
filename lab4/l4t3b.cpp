#include <iostream>
using namespace std;

int main()
{
    long arr1[20], arr2[20], arr3[40];
    for (int i = 0; i < 20; ++i)
    {
        arr1[i] = rand() % 21;
        arr2[i] = rand() % 21;
    }
    for (int i = 0, j = 19; i < 20; ++i, --j)
    {
        arr3[i * 2] = arr1[j];
        arr3[i * 2 + 1] =  arr2[i] + arr1[(i + 1) % 20];
    }
    for (long i : arr3)
    {
        cout << i << "; ";
    }
    return 0;
}