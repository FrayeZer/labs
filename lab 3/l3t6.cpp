#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int n, count_chet = 0, total = 0;

    do
    {
        getline(cin, input);
        if (input.empty())
        {
            break;
        }
        n = stoi(input);
        total += 1;
        count_chet += (n & 1) == 0 ? 1 : 0;

    } while (true);
    cout << total << endl
         << count_chet;
}