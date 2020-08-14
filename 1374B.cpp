#include <iostream>
using namespace std;

int solve(int);

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

int solve(int num)
{
    int pow2 = 0, pow3 = 0;
    while (num % 2 == 0)
    {
        pow2++;
        num /= 2;
    }
    while (num % 3 == 0)
    {
        pow3++;
        num /= 3;
    }
    if (num == 1 && pow3 >= pow2)
    {
        return (2 * pow3) - pow2;
    }
    else
    {
        return -1;
    }
}