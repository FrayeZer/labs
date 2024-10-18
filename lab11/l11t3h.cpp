#include <iostream>
#include <stack>
using namespace std;

// Проверка баланса скобок
bool balans(const string &str)
{
    stack<char> s;
    for (char ch : str)
    {
        if (ch == '(')
        {
            s.push(ch);
        }
        else if (ch == ')')
        {
            if (s.empty())
            {
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}

string skobki(string str)
{
    stack<int> skobki_stack;
    string result = "";
    bool in_brackets = false;

    if (!balans(str))
    {
        return "Несбалансированные скобки";
    }

    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == '(')
        {
            skobki_stack.push(i);
            in_brackets = true;
        }
        else if (str[i] == ')')
        {
            if (!skobki_stack.empty())
            {
                skobki_stack.pop();
            }

            if (skobki_stack.empty())
            {
                in_brackets = false;
            }
        }
        else
        {
            if (!in_brackets)
            {
                result += str[i];
            }
        }
    }

    return result;
}

int main()
{
    string str;
    getline(cin, str);

    cout << skobki(str) << endl;

    return 0;
}
