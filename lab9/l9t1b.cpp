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

void print(int *arr, int *begin, int *end)
{
    for (int *ind = arr; ind < end; ++ind)
    {
        cout << *ind << "[" << ind - begin << "]" << " ";
    }
}

int main()
{
    int array[5];
    cout << "Длина массива 5. Введите 5 чисел." << endl;
    input(array, 5);
    print(array, begin(array), end(array));

    cout << endl
         << "Введите n" << endl;
    int n;
    cin >> n;
    cout << "Введите " << n << " чисел" << endl;

    int *arr2 = new int[n];
    input(arr2, n);
    print(arr2, arr2, (arr2 + n));

    return 0;
}