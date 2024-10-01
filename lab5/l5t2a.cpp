#include <iostream>
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
            x = i / 4 + 1;
            y = i % 4 + 1;
        }
        // лень писать перебор
    }
    cout << minvalue << " (" << x << "; " << y << ")";
    return 0;
}