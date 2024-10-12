#include <iostream>
using namespace std;

void enter_array(int (*arr)[3])
{
    int num;
    for (int i = 0; i < 9; ++i)
    {
        cin >> num;
        arr[i / 3][i % 3] = num;
    }
}

void print_array(int arr[3][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    cout << "Заполните матрицу 3 х 3" << endl;
    int arr[3][3], num;
    enter_array(arr);
    print_array(arr);
    return 0;
}