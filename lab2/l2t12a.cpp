#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a > 10 ? a : 0) + (b > 10 ? b : 0) + (c > 10 ? c : 0);
    return 0;
}