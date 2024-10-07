#include <iostream>
using namespace std;

void stars(int n, int m)
{
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
    int n;
    cin >> n;
    stars(n, 1);
    return 0;
}