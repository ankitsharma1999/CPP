#include <iostream>
#include <vector>
using namespace std;

int solve(int, int, vector<int>);

int main()
{
    int n, d;
    vector<int> vec = {};
    cin >> n >> d;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    cout << solve(n, d, vec) << "\n";
    return 0;
}

int solve(int n, int d, vector<int> series)
{
    int moves = 0;
    for (int i = 1; i < n; i++)
    {
        int diff = series[i] - series[i - 1];
        if (diff <= 0)
        {
            diff = abs(diff);
            int mult = (diff / d) + 1;
            moves += mult;
            series[i] += (mult * d);
        }
    }
    return moves;
}