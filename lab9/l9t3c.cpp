#include <iostream>
using namespace std;

void random_matrix(int **arr, int n)
{
    int num;
    for (int i = 0; i < n; ++i)
    {
        int *l2arr = new int[n];
        arr[i] = l2arr;
        for (int j = 0; j < n; ++j)
        {
            num = rand() % 1001;
            arr[i][j] = num;
        }
    }
}

void enter_matrix(int **arr, int n)
{
    int num;
    for (int i = 0; i < n; ++i)
    {
        int *l2arr = new int[n];
        arr[i] = l2arr;
        for (int j = 0; j < n; ++j)
        {
            cin >> num;
            arr[i][j] = num;
        }
    }
}

void print_array(int *arr, int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void print_matrix(int **arr, int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void line_sum(int **arr, int n, int *new_arr)
{
    for (int i = 0; i < n; ++i)
    {
        new_arr[i] = 0;
        for (int j = 0; j < n; ++j)
        {
            new_arr[i] += arr[i][j];
        }
    }
}

int *mins(int **arr, int n)
{
    int *arr2 = new int[n];
    for (int i = 0; i < n; ++i)
    {
        arr2[i] = arr[i][0];
        for (int j = 0; j < n; ++j)
        {
            arr2[i] = min(arr2[i], arr[i][j]);
        }
    }
    return arr2;
}

int main()
{
    cout << "Введите n" << endl;
    int n;
    cin >> n;

    int **arr = new int *[n];
    random_matrix(arr, n);
    print_matrix(arr, n);

    int *arr_with_sum = new int[n];
    line_sum(arr, n, arr_with_sum);

    cout << endl;
    print_array(arr_with_sum, n);

    return 0;
}