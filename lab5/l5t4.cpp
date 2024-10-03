#include <iostream>
using namespace std;

int main()
{
    int arr[2][4][3], num;
    bool x, y = false;

    for (int i = 0; i < 24; ++i)
    {
        cin >> num;
        arr[i / 12][(i / 3) % 4][i % 3] = num;
    }

    for (int i = 0; i < 2; ++i)
    {
        x = true;
        for (int j = 0; j < 4; ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
                if (arr[i][j][k] != arr[i][0][0])
                {
                    x = false;
                }
            }
        }
        if (x == true)
        {
            y = true;
            break;
        }
    }

    for (int j = 0; j < 4; ++j)
    {
        x = true;
        for (int i = 0; i < 2; ++i)
        {
            for (int k = 0; k < 3; ++k)
            {
                if (arr[i][j][k] != arr[0][j][0])
                {
                    x = false;
                }
            }
        }
        if (x == true)
        {
            y = true;
            break;
        }
    }

    for (int k = 0; k < 3; ++k)
    {
        x = true;
        for (int i = 0; i < 2; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                if (arr[i][j][k] != arr[0][0][k])
                {
                    x = false;
                }
            }
        }
        if (x == true)
        {
            y = true;
            break;
        }
    }

    if (y == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}