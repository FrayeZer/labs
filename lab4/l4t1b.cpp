#include <iostream>
using namespace std;

int main()
{
    int array[10] = {}, n;
    for (int i = 0; i < 10; ++i)
    {
        cin >> n;
        array[i] = n;
    }

    for (int j = 1; j < 10; j += 2)
    {
        cout << array[j] << " ";
    }
    return 0;
}