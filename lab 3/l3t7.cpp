#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    float x1, y1, x, y, firstx, firsty, ln = 0;
    cout << "Введите n" << endl;
    cin >> n;
    cout << "Введите x, y (в две строки)" << endl;
    cin >> x >> y;
    firstx = x;
    firsty = y;
    for (int i = 1; i < n; ++i)
    {
        cout << "Введите x, y (в две строки)" << endl;
        cin >> x1 >> y1;
        ln += sqrt(pow(x1 - x, 2) + pow(y1 - y, 2));
        x = x1;
        y = y1;
    }
    ln += sqrt(pow(x1 - firstx, 2) + pow(y1 - firsty, 2));
    cout << ln;
    return 0;
}