#include <iostream>
using namespace std;

int main()
{
    int t = 10;
    while (t < 100)
    {
        cout << t << "(tC), " << 1.8 * t + 32 << "(tF)." << endl;
        t += 10;
    }
}