#include <iostream>
using namespace std;

int main()
{
    int array[2][3], summ = 0;
    for (int i = 0; i < 6; ++i)
    {
        array[i / 3][i % 3] = rand() % 31;
    }
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            summ += array[i][j];
        }
    }
    cout << (summ % 2 == 0 ? "Четная" : "Нечетная");
    return 0;
}