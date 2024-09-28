#include <iostream>
using namespace std;

int main()
{
    int n, c = 1;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << (c == 1 ? "O" : "#");
            c = (c == 1 ? 0 : 1);
        }
        c = (c == 1 ? 0 : 1);
        cout << endl;
    }

    return 0;
}