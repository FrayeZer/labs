#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    int num, min_num = INT_MAX;
    for (int i = 0; i < 7; ++i)
    {
        cin >> num;
        vec.push_back(num);
    }

    for (int i : vec)
    {
        min_num = min(min_num, i);
    }
    cout << min_num;
    return 0;
}