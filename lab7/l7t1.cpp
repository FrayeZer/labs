#include <iostream>
using namespace std;

double sum(double a, double b)
{
    return a + b;
}

double mlt(double a, double b)
{
    return a * b;
}

double dif(double a, double b)
{
    return a - b;
}

int main()
{
    double a, b;
    cin >> a >> b;

    // 5(a – 2 + b) + 1000a
    cout << sum(mlt(5, sum(dif(a, 2), b)), mlt(1000, a));
    return 0;
}