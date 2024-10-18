#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int S(string str)
{
    int c = 0;
    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == 'S')
        {
            c += 1;
        }
    }
    return c;
}

int s(string str)
{
    int c = 0;
    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == 's')
        {
            c += 1;
        }
    }
    return c;
}

int intcount(string str)
{
    int c = 0;
    for (int i = 0; i < str.length(); ++i)
    {
        if (isdigit(str[i]))
        {
            c += 1;
        }
    }
    return c;
}

int capitals(string str)
{
    int c = 0;
    for (int i = 0; i < str.length(); ++i)
    {
        if (isalpha(str[i]) && toupper(str[i]) == str[i])
        {
            c += 1;
        }
    }
    return c;
}

void replace_anyint_to_5(char cstr[])
{
    for (int i = 0; cstr[i] != '\0'; ++i)
    {
        if (isdigit(cstr[i]))
        {
            cstr[i] = '5';
        }
        cstr[i] = toupper(cstr[i]);
    }
}

int main()
{
    string str = "123abc-S-s-+++SSSaaaAAAssss5678";
    int _S, _s, _intcount, _capitals;
    // cin >> str;

    _S = S(str);
    _s = s(str);
    _intcount = intcount(str);
    _capitals = capitals(str);

    char newstr[str.length() + 1] = "\0";
    strcpy(newstr, str.c_str());
    replace_anyint_to_5(newstr);

    printf("Исходная строка = \"%s\",\nколичество S = %d,\nколичество s = %d,\nколичество s и S = %d,\nколичество цифр = %d,\nколичество заглавных букв = %d,\nновая строка = \"%s\"\n",
           str.c_str(), _S, _s, _S + _s, _intcount, _capitals, newstr);
    return 0;
}