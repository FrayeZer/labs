#include <iostream>
#include <utility>
#include <cmath>
using namespace std;

double areaOfQuadrilateral(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
    return 0.5 * fabs(x1 * y2 + x2 * y3 + x3 * y4 + x4 * y1 - (y1 * x2 + y2 * x3 + y3 * x4 + y4 * x1));
}

/*
Идею я понял - разбить на 2 треугольника. Но это не работает
с невыпуклыми четырехугольниками, для них логика слишком сложная
*/

int main()
{
    double a1, b1, a2, b2, a3, b3, a4, b4;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3 >> a4 >> b4;
    double area = areaOfQuadrilateral(a1, b1, a2, b2, a3, b3, a4, b4);
    cout << area << endl;

    return 0;
}