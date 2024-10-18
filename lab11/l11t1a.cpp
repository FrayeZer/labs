#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fn, sn, tn, _n, _I, _AI;

    cout << "Введите ФИО (Кажд. слово с нов. строки, на английском)" << endl;
    cin >> fn >> sn >> tn;

    _n = fn + " " + sn + " " + tn;
    _I = string(1, fn[0]) + ". " + string(1, sn[0]) + ". " + string(1, tn[0]) + ".";
    _AI = sn + " " + string(1, toupper(fn[0])) + ". " + string(1, toupper(tn[0])) + ".";
    cout << "Вы ввели: " << _n << endl;
    cout << _I << endl;
    cout << _AI << endl;
    return 0;
}
