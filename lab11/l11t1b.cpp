#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int STR_SIZE = 30;
    const int BIG_STR_SIZE = 90;
    char last_name[STR_SIZE], your_name[STR_SIZE], father_name[STR_SIZE];
    char full_name[BIG_STR_SIZE], initials[STR_SIZE], initials_plus[STR_SIZE];
    cin >> your_name >> last_name >> father_name;

    full_name[0] = '\0';
    strcat(full_name, last_name);
    strcat(full_name, " ");
    strcat(full_name, your_name);
    strcat(full_name, " ");
    strcat(full_name, father_name);
    cout << full_name << endl;

    initials[0] = last_name[0];
    initials[1] = '.';
    initials[2] = your_name[0];
    initials[3] = '.';
    initials[4] = father_name[0];
    initials[5] = '\0';
    cout << initials << endl;

    char temp[6];
    temp[0] =' ';
    temp[1] = toupper(last_name[0]);
    temp[2] = '.';
    temp[3] = toupper(father_name[0]);
    temp[4] = '.';
    initials_plus[0] = '\0';
    strcat(initials_plus, last_name);
    strcat(initials_plus, temp);
    cout << initials_plus << endl;

    return 0;
}