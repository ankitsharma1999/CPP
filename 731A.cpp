#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int solve(string);

int main()
{
    string str = "";
    cin >> str;
    cout << solve(str) << "\n";
}

int solve(string str)
{
    int pointer = 1;
    int netMoves = 0;
    for (int i = 0; i < str.length(); i++)
    {
        int curr = (int)str[i] - 96;
        netMoves += min(abs(curr - pointer), 26 - abs(curr - pointer));
        pointer = curr;
    }
    return netMoves;
}