#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, num;
    cout << "Кол-во замеров в день = ";
    cin >> n;
    float **arr = new float *[7];
    for (int i = 0; i < 7; ++i)
    {
        arr[i] = new float[n];
        for (int j = 0; j < n; ++j)
        {
            cin >> num;
            arr[i][j] = num;
        }
    }

    float maxnum = (float)INT_MIN;
    int day_when_max_temp = 0;
    string days[7] = {"Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота", "Воскресенье"};
    for (int i = 0; i < 7; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (arr[i][j] > maxnum)
            {
                maxnum = arr[i][j];
                day_when_max_temp = i;
            }
        }
    }

    cout << "Макс. температура = " << maxnum << endl
         << "Это было в " << days[day_when_max_temp];

    for (int i = 0; i < 7; ++i)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}