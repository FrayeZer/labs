#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    for (int i = 0; i < str.length() - 2; ++i)
    {
        if (str.substr(i, 3) == "min")
        {
            str[i] = 'M';
            str[i + 1] = 'A';
            str[i + 2] = 'X';
        }
    }
    cout << str << endl;
    return 0;
}