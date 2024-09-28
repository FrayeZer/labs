#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x = 0.f;
    do
    {
        cout << log(x + 1) * sin(x) << endl;
        x += 0.5;
    } while (x <= 5);

    return 0;
}