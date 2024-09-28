#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cout << "Введите два числа, разделенные ENTER" << endl;
    cin >> a >> b;
    cout << a + b << endl
         << a - b << endl
         << a * b;
    return 0;
}