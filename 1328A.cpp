#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int solve(int, int);

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a;
        cin >> b;
        cout << solve(a, b) << "\n";
    }
    return 0;
}

int solve(int a, int b)
{
    if (a % b == 0)
    {
        return 0;
    }
    else
    {
        int m = a / b;
        m++;
        return (b * m) - a;
    }
}