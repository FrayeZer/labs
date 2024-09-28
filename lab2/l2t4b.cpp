#include <iostream>
using namespace std;

int main()
{
    int dM, dW;
    cout << "Введите дату: ";
    cout << "День месяца: ";
    cin >> dM;
    cout << "Номер дня в неделе: ";
    cin >> dW;

    if (dM == 13)
    {
        if (dW == 2 || dW == 5)
        {
            cout << "Неудачный день";
        }
    }
    if (dM == 17)
    {
        if (dW == 5)
        {
            cout << "Неудачный день";
        }
    }
    return 0;
}