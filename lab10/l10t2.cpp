#include <iostream>
using namespace std;

void rec()
{
    int n;
    cin >> n;

    if (n != 0)
    {
        rec();
        cout << n << endl;
    }
}

int main()
{
    cout << endl;
    rec();
    return 0;
}