#include <iostream>
#include <format>
using namespace std;

int main()
{
    int array[10] = {}, n;
    int array2[10] = {-2, 4, 3, -7, 0, 12, 9, -2, 4, 2};

    for (int i = 0; i < 10; ++i)
    {
        cin >> n;
        array[i] = n;
    }

    for (int j = 0; j < 10; ++j)
    {
        if (array2[j] >= 0)
        {
            cout << array[j] << " + " << array2[j] << " = " << array[j] + array2[j] << endl;
        }
        else
        {
            cout << array[j] << " + (" << array2[j] << ") = " << array[j] + array2[j] << endl;
        }
    }
    return 0;
}