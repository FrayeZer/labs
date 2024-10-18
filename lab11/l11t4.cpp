#include <iostream>
using namespace std;

int rtoint(char ch)
{
    switch (ch)
    {
    case 'I':
        return 1;
        break;

    case 'V':
        return 5;
        break;

    case 'X':
        return 10;
        break;

    case 'L':
        return 50;
        break;

    case 'C':
        return 100;
        break;

    case 'D':
        return 500;
        break;

    case 'M':
        return 1000;
        break;

    default:
        return 0;
        break;
    }
}

int main()
{
    string str;
    getline(cin, str);
    int num0 = 0, num1 = 0;
    int res = 0;

    for (int i = str.length() - 1; i >= 0; --i)
    {
        num1 = rtoint(str[i]);
        if (num1 >= num0)
        {
            res += num1;
        }
        else
        {
            res -= num1;
        }
        num0 = num1;
    }

    cout << res << endl;
    return 0;
}