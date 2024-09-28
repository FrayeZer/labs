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

    cout << array[1] << endl << array[8];
    return 0;
}