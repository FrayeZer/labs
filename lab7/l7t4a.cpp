#include <iostream>
using namespace std;

void stars(int n, int m)
{
    n = 4;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    stars(1, 1);
    return 0;
}