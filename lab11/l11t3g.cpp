#include <iostream>
#include <stack>
using namespace std;

bool skobki(string str)
{
    stack<char> st;

    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == '(')
        {
            st.push('(');
        }
        else if (str[i] == ')')
        {
            if (st.empty())
            {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}

int main()
{
    string str;
    getline(cin, str);

    cout << skobki(str) << endl;

    return 0;
}