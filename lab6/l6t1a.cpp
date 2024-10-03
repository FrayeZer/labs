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

     cout << a << endl
          << pi << endl;
     cout << endl;

     cout << pa << endl
          << ppi << endl;
     cout << endl;

     cout << pa - ppi << endl;
     cout << endl;

     cout << sizeof(a) << endl
          << sizeof(pi) << endl;
     return 0;
}