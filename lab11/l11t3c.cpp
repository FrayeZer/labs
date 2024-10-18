#include <iostream>
using namespace std;

string kuku(string str)
{
    int pos = str.find("ku-ku");

    if (pos != string::npos)
    {
        while (pos != string::npos)
        {
            str.replace(pos, 5, "ku-ka-re-ku");
            pos = str.find("ku-ku");
        }
    }
    else
    {
        str.insert(str.length() / 2, " ku-ku ku-ku ku-ku");
    }
    return str;
}

int main()
{
    string str, str2;
    getline(cin, str);

    str2 = kuku(str);

    cout << str2 << endl;
    return 0;
}