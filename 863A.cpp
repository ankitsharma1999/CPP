#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

bool solve(int);

int main()
{
    int num;
    cin >> num;
    string res = solve(num) ? "YES" : "NO";
    cout << res << "\n";
}

bool solve(int num)
{
    string revNum = to_string(num);
    string numStr = to_string(num);
    reverse(revNum.begin(), revNum.end());
    for (int i = 0; i < revNum.length(); i++)
    {
        if (revNum[i] == '0')
        {
            numStr = '0' + numStr;
        }
        else
        {
            break;
        }
    }
    string revNumStr = numStr;
    reverse(revNumStr.begin(), revNumStr.end());
    return revNumStr == numStr;
}