#include <iostream>
using namespace std;

int main()
{
    float a, b, c, x, y, min1, min2;
    cout << "Сторона кирпича [a]: ";
    cin >> a;
    cout << "Сторона кирпича [b]: ";
    cin >> b;
    cout << "Высота кирпича [c]: ";
    cin >> c;
    cout << "Сторона отверстия [x]: ";
    cin >> x;
    cout << "Сторона отверстия [y]: ";
    cin >> y;

    min1 = min(min(a, b), c);
    min2 = (a == min1 ? min(b, c) : (b == min1 ? min(a, c) : min(a, b)));
    if (min1 <= min(x, y) && min2 <= max(x, y))
    {
        cout << "Влезет";
    }
    else
    {
        cout << "Не влезет";
    }
    return 0;
}