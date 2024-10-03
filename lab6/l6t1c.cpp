#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     cout << fixed << setprecision(10);
     auto a = 1.5;
     auto pi = M_PI;

     auto *pa = &a;
     auto *ppi = &pi;

     double *first = new double(*pa + *ppi);
     double *second = new double(*pa - *ppi);

     cout << *first << endl
          << *second << endl;
     delete first, second;

     return 0;
}