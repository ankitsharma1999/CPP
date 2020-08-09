#include <iostream>
#include <algorithm>
using namespace std;

int solve(string, string);

int main()
{
    string str1 = "", str2 = "";
    cin >> str1;
    cin >> str2;
    cout << solve(str1, str2) << "\n";
}

int solve(string str1, string str2)
{
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    int lim = min(str1.length(), str2.length());
    int i, ctr = 0;
    for (i = 0; i < lim; i++)
    {
        if (str1[i] == str2[i])
        {
            ctr++;
        }
        else
        {
            break;
        }
    }
    return (str1.length() + str2.length()) - (2 * ctr);
}