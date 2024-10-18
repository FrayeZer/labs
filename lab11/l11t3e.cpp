#include <iostream>
using namespace std;

string posle_kuku(string str)
{
    int pos = str.rfind("ku-ku");
    str = str.substr(0, pos);
    return str;
}

int main()
{
    string str, str2;
    getline(cin, str);
    str2 = posle_kuku(str);
    cout << str2 << endl;
    return 0;
}