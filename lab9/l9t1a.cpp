#include <iostream>
using namespace std;

void input(int *arr, int l)
{
    int num;
    for (int i = 0; i < l; ++i)
    {
        cin >> num;
        *(arr + i) = num;
    }
}

int main()
{
    int array[5];
    cout << "Длина массива 5. Введите 5 чисел." << endl;
    input(array, 5);

    for (int i = 0; i < 5; ++i)
    {
        cout << array[i] << " ";
    }

    cout << endl
         << "Введите n" << endl;
    int n;
    cin >> n;
    cout << "Введите " << n << " чисел" << endl;

    int *arr2 = new int[n];
    input(arr2, n);

    for (int i = 0; i < n; ++i)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}