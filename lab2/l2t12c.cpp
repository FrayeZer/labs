#include <iostream>
using namespace std;

int main()
{
    int a, b, c, min1, min2;
    cin >> a >> b >> c;
    min1 = min(min(a, b), c);
    min2 = (a == min1 ? min(b, c) : (b == min1 ? min(a, c) : min(a, b)));
    cout << min2;
    return 0;
}