#include <iostream>
using namespace std;

void stars(int n, int m)
{
    for (int i = 0; i < n; ++i)
    {
        for (int k = 0; k < m; ++k)
        {
            cout << " ";
        }
        for (int j = 0; j < n; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    stars(n, m);
    return 0;
}