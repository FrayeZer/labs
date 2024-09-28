#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    int num, count;
    for (int i = 0; i < 7; ++i)
    {
        cin >> num;
        vec.push_back(num);
    }

    for (int i : vec)
    {
        count += (i >= 10 && i <= 99 ? 1 : 0);
    }
    cout << count;
    return 0;
}