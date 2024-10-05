#include <iostream>
using namespace std;

int main()
{
    int n, num, pos_summ = 0;
    cin >> n;
    double *arr = new double[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> num;
        *(arr + i) = num;
    }

    for (int i = 0; i < n; ++i)
    {
        pos_summ += (*(arr + i) > 0 ? *(arr + i) : 0);
    }
    cout << pos_summ;
    return 0;
}