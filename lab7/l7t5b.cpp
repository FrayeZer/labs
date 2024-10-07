#include <iostream>
using namespace std;

int pow(int a, int b)
{
    int k = a;
    for (int i = 0; i < b - 1; ++i)
    {
        a *= k;
    }
    return a;
}

int main()
{
    int a, b;
    cout << "Введите a и b (кажд. на нов. строке)" << endl;
    cin >> a >> b;
    cout << pow(a, b);
    return 0;
}