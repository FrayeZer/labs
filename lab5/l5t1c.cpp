#include <iostream>
using namespace std;

int main()
{
    int array[2][3], summ = 0, mult = 1;
    for (int i = 0; i < 6; ++i)
    {
        array[i / 3][i % 3] = rand() % 31;
    }
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            summ += (2 <= array[i][j] && array[i][j] <= 9 ? 0 : array[i][j]);
            mult *= (2 <= array[i][j] && array[i][j] <= 9 ? 1 : array[i][j]);
        }
    }
    cout << "Сумма: " << summ << endl;
    cout << "Произведение: " << mult;
    return 0;
}