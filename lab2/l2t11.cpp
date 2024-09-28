#include <iostream>
#include <string>
#include <vector>
#include <ranges>
using namespace std;

bool contains(vector<int> vec, int num)
{
    for (int i : vec)
    {
        if (i == num)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> arr1 = {5, 6, 7, 8, 9, 0};
    vector<int> arr2 = {2, 3, 4};
    int d, m, y, td, tm, ty, DY;
    string word;
    cout << "enter your birth DAY; MONTH; YEAR (only value per row)" << endl;
    cin >> d >> m >> y;
    cout << "enter today's DAY; MONTH; YEAR (only value per row)" << endl;
    cin >> td >> tm >> ty;

    DY = ty - y + (tm > m ? 0 : (tm == m ? (td >= d ? 0 : -1) : -1));
    if (contains(arr1, DY % 10) || (DY > 10 && DY < 20))
    {
        word = "лет";
    }
    else if (DY % 10 == 1)
    {
        word = "год";
    }
    else if (contains(arr2, DY % 10))
    {
        word = "года";
    }

    cout << "Вам " << DY << " " << word;
}

// 1 год
// 2 3 4 года
// 5 6 7 8 9 0 лет
// 11-19 лет