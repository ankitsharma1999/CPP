#include <iostream>
using namespace std;

int solve(int, int, int, int, int);

int main()
{
    int c, v0, v1, a, l;
    cin >> c >> v0 >> v1 >> a >> l;
    cout << solve(c, v0, v1, a, l) << "\n";
    return 0;
}

int solve(int c, int v0, int v1, int a, int l)
{
    int days = 0, currPage = 0, a_mult = 0;
    while (currPage < c)
    {
        int newPagesRead = 0;
        int currLim = min(v1, v0 + (a_mult * a));
        a_mult++;
        if (days > 0)
            newPagesRead = currLim - l;
        else
            newPagesRead = currLim;
        currPage += newPagesRead;
        days++;
    }
    return days;
}