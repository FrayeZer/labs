#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, maxn, c = 0;
    vector<int> vec;
    do
    {
        cin >> n;
        vec.push_back(n);
    } while (n != 0);

    for (int i : vec)
    {
        if (i > maxn)
        {
            maxn = i;
            c = 0;
        }
        if (i == maxn)
        {
            c += 1;
        }
    }
    cout << c;
    return 0;
}