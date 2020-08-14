#include <iostream>
using namespace std;

string solve(int);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << solve(n) << "\n";
    }
    return 0;
}

string solve(int n)
{
    string res = "";
    int num = 0;
    num = n / 4;
    if (n % 4)
        num++;
    for (int i = n; i >= 1; i--)
    {
        if (i > num)
            res += "9";
        else
            res += "8";
    }
    return res;
}
