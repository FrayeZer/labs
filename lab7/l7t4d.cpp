#include <iostream>
using namespace std;

void stars(int n, int m)
{
    char ch = '*';
    for (int i = 0; i < n; ++i)
    {
        for (int l = 0; l < m; ++l)
        {
            for (int j = 0; j < n; ++j)
            {
                for (int k = 0; k < m; ++k)
                {
                    cout << ch;
                }
                ch = (ch == '^' ? '*' : '^');
            }
            ch = (n % 2 == 1 ? (ch == '^' ? '*' : '^') : ch);
            cout << endl;
        }
        ch = (ch == '^' ? '*' : '^');
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    stars(n, m);
    return 0;
}

/*
То ли я чета не то делал, то ли задание
хреновое, но прошлые наработки почти бесполезны
Наверное задумывалось все как код который
я буду реюзать из прошлых подзадач
*/