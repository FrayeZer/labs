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

int main()
{
    cout << "Введите n" << endl;
    int n;
    cin >> n;

    int **arr = new int *[n];
    random_matrix(arr, n);

    return 0;
}