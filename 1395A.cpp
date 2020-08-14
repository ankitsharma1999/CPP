#include <iostream>
using namespace std;

bool solve(int, int, int, int);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, g, b, w;
        cin >> r >> g >> b >> w;
        if (solve(r, g, b, w))
            cout << "Yes"
                 << "\n";
        else
            cout << "No"
                 << "\n";
    }
}

bool solve(int r, int g, int b, int w)
{

    int numEven = 0;
    if (r % 2 == 0)
        numEven++;
    if (g % 2 == 0)
        numEven++;
    if (b % 2 == 0)
        numEven++;
    if (w % 2 == 0)
        numEven++;

    bool canBeOperated = true;
    if (r == 0 || g == 0 || b == 0)
        canBeOperated = false;

    if (canBeOperated)
    {
        if (numEven == 4 || numEven == 3 || numEven == 1 || numEven == 0)
            return true;
        else
            return false;
    }
    else
    {
        if (numEven == 4 || numEven == 3)
            return true;
        else
            return false;
    }
}