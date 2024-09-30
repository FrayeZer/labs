#include <iostream>
using namespace std;

int main()
{
    long arr1[20], arr2[20], arr3[60];
    for (int i = 0; i < 20; ++i)
    {
        arr1[i] = rand() % 21;
        arr2[i] = rand() % 21;
    }
    for (int i = 0; i < 20; ++i)
    {
        arr3[i * 3] = arr1[i];
        arr3[i * 3 + 1] = arr2[i];
        arr3[i * 3 + 2] = arr1[i] + arr2[i];
    }
    for (long i : arr3)
    {
        cout << i << "; ";
    }
    return 0;
}