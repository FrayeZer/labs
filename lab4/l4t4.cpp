#include <iostream>
using namespace std;

int main()
{
    int arr[10], num, w;

    for (int i = 0; i < 10; ++i)
    {
        cin >> num;
        arr[i] = num;
    }

    cin >> w;

    for (int i = 0; i < 9; ++i)
    {
        for (int j = 9; j > i; --j)
        {
            if (arr[i] + arr[j] == w)
            {
                cout << arr[i] << "[" << i << "]" << endl;
                cout << arr[j] << "[" << j << "]" << endl;
            }
        }
    }
    return 0;
}