#include <iostream>
using namespace std;

int main()
{
    int array[10] = {}, n, summ;
    for (int i = 0; i < 10; ++i)
    {
        cin >> n;
        array[i] = n;
    }

    for (int j : array)
    {
        summ += j;
    }

    cout << (float)summ / 10;
    return 0;
}