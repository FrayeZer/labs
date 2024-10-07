#include <iostream>
#include <string>
using namespace std;

string itow(int a)
{
    string arr[11] = {"ноль", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять", "десять"};
    return arr[abs(a)];
}

char sign(int a)
{
    return (a >= 0 ? (a == 0 ? ' ' : '+') : '-');
}

int main()
{
    int n;
    cin >> n;

    cout << sign(n) << itow(n);
    return 0;
}