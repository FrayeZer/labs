#include <iostream>
#include <utility>
#include <cmath>
using namespace std;

double R(pair<double, double> a, pair<double, double> b)
{
    return sqrt(pow(b.first - a.first, 2) + pow(b.second - a.second, 2));
}

int main()
{
    double a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    pair<double, double> cords1(a1, b1);
    pair<double, double> cords2(a2, b2);

    pair<double, double> zero_cords(0, 0);

    cout << R(cords1, zero_cords) << endl;
    cout << R(cords2, zero_cords) << endl;
    return 0;
}