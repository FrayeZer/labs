#include <iostream>
using namespace std;

int main()
{
    float a, b, r, h, c;
    cout << "Сторона коробки [a]: ";
    cin >> a;
    cout << "Сторона коробки [b]: ";
    cin >> b;
    cout << "Высота коробки [c]: ";
    cin >> c;
    cout << "Радиус торта [r]: ";
    cin >> r;
    cout << "Высота торта [h]: ";
    cin >> h;

    if (2 * r <= min(a, b) && h <= c)
    {
        cout << "Поместится";
    }
    else
    {
        cout << "Не поместится";
    }

    return 0;
}