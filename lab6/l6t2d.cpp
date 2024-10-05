#include <iostream>
using namespace std;

int main()
{
    int n, num, sk_summ = 0;
    cin >> n;

    double *arr = new double[n];
    double *arr2 = new double[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> num;
        *(arr + i) = num;
    }
    cout << endl;
    for (int i = 0; i < n; ++i)
    {
        double elem = *(arr + i);
        *(arr2 + i) = (elem >= 0 ? elem * 10 : elem - 100);
        sk_summ += *(arr2 + i) * *(arr + i);
    }
    cout << sk_summ;
    delete[] arr, arr2;
    return 0;
}