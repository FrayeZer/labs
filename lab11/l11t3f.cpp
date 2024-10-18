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

int word_count(string str)
{
    int count = 0;
    vector vec = split(str);
    for (int i = 0; i < len(vec); ++i)
    {
        if (len(vec[i]) == 1)
        {
            if (!ispunct(vec[i][0]))
            {
                count += 1;
            }
        }
        else
        {
            count += 1;
        }
    }

    return count;
}

int main()
{
    string str;
    int wcount;
    getline(cin, str);

    wcount = word_count(str);
    cout << wcount << endl;
    return 0;
}