#include <iostream>
#include <utility>
using namespace std;

int main()
{
    int arr[3][4], num, x, y, minvalue = INT_MAX;
    for (int i = 0; i < 12; ++i)
    {
        cin >> num;
        arr[i / 4][i % 4] = num;

        if (num < minvalue)
        {
            minvalue = num;
            x = i / 4;
            y = i % 4;
        }
        // лень писать перебор
    }
    for (int i = 0; i < 3; ++i)
    {
        swap(arr[i][3], arr[i][y]);
        for (int j = 0; j < 4; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}