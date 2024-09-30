#include <iostream>
using namespace std;

int main()
{
    int array[8] = {0, 1};

    for (int i = 2; i < 8; ++i)
    {
        array[i] = array[i-1] + array[i-2];
    }
    
    for (int i : array)
    {
        cout << i << "; ";
    }
    return 0;
}