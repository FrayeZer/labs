#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(10);
    double arr[5] = {1.5f, M_PI, -0.7f, 3.f, -2.4f};
    double *arrlink = arr;
    cout << *arrlink << endl
         << *(arrlink + 1) << endl
         << *(arrlink + 4) << endl
         << endl;

    cout << &arr[0] - &arr[1];
    return 0;
}