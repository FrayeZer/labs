#include <iostream>
using namespace std;

int main()
{
    int array[2][3];
    for (int i = 0; i < 6; ++i)
    {
        array[i / 3][i % 3] = rand() % 31;
    }
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}