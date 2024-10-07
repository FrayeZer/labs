#include <iostream>
#include <utility>
#include <cmath>
using namespace std;

double S(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

double R(pair<double, double> a, pair<double, double> b)
{
    return sqrt(pow(b.first - a.first, 2) + pow(b.second - a.second, 2));
}

int main()
{
    double a1, b1, a2, b2, a3, b3;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    pair<double, double> cords1(a1, b1);
    pair<double, double> cords2(a2, b2);
    pair<double, double> cords3(a3, b3);
    pair<double, double> zero_cords(0, 0);

    cout << S(R(cords1, cords2), R(cords2, cords3), R(cords1, cords3)) << endl;
    return 0;
}