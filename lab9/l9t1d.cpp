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

int smult(int *arr1, int l1, int *arr2, int l2)
{
    int newl = min(l1, l2);
    int result = 0;

    for (int i = 0; i < newl; ++i)
    {
        result += arr1[i] * arr2[i];
    }
    return result;
}

int *summ(int *arr1, int l1, int *arr2, int l2)
{
    int newl = max(l1, l2);
    int *arr3 = new int[newl];
    if (newl == l1)
    {
        for (int i = 0; i < newl; ++i)
        {
            if (i < l2)
            {
                arr3[i] = arr1[i] + arr2[i];
            }
            else
            {
                arr3[i] = arr1[i];
            }
        }
    }
    else
    {
        for (int i = 0; i < newl; ++i)
        {
            if (i < l1)
            {
                arr3[i] = arr1[i] + arr2[i];
            }
            else
            {
                arr3[i] = arr2[i];
            }
        }
    }
    return arr3;
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

    cout << endl
         << "Сумма векторов:" << endl;
    int *sumars = summ(array, 5, arr2, n);
    print(sumars, sumars, sumars + max(n, 5));
    delete[] sumars;

    return 0;
}