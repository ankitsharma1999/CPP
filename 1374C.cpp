#include <iostream>
using namespace std;

int solve(string, int);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        cout << solve(str, n) << "\n";
    }
    return 0;
}

int solve(string str, int n)
{
    int balance = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '(')
            balance++;
        else
        {
            balance--;
            if (balance < 0)
            {
                ans++;
                balance = 0;
            }
        }
    }
    return ans;
}