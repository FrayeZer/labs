#include <iostream>
using namespace std;

int main()
{
    int a, b, c, min1;
    cin >> a >> b >> c;
    min1 = min(min(a, b), c);
    cout << (a == min1 ? 1 : (b == min1 ? 2 : 3));
    return 0;
}