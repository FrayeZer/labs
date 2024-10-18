#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print(string str)
{
    cout << str << endl;
}

vector<string> split(string str)
{
    vector<string> vec;
    string temp;
    int left = 0;

    for (int right = 0; right < str.length(); ++right)
    {
        if (str[right] == ' ' || right == str.length() - 1)
        {
            temp = str.substr(left, right - left + (right == str.length() - 1 ? 1 : 0));
            if (temp != "")
            {
                vec.push_back(temp);
            }
            left = right + 1;
        }
    }
    return vec;
}

string join(string space, vector<string> vec)
{
    string str;
    for (int i = 0; i < vec.size(); ++i)
    {
        str.append(vec[i]);
        if (i != vec.size() - 1)
        {
            str.append(space);
        }
    }
    return str;
}

int len(string str)
{
    return str.length();
}

int len(vector<string> vec)
{
    return vec.size();
}

vector<int> range(int n)
{
    vector<int> vec;
    for (int i = 0; i < n; ++i)
    {
        vec.push_back(i);
    }
    return vec;
}

int main()
{
    string str;
    getline(cin, str);

    vector<string> vec = split(str);
    for (int i : range(len(vec)))
    {
        if (len(vec[i]) == 5)
        {
            vec[i] = "ku-ku";
        }
    }
    string newstr = join(" ", vec);
    print(newstr);

    return 0;
}