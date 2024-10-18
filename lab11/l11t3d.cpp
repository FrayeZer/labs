#include <iostream>
using namespace std;

string bez_kuku(string str)
{
    while (str.find("ku-ku") != string::npos)
    {
        int pos = str.find("ku-ku");
        str = str.replace(pos, 5, "");
    }
    return str;
}

int main()
{
    string str, str2;
    getline(cin, str);

    str2 = bez_kuku(str);
    cout << str2 << endl;

    return 0;
}