#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool solve(vector<int>, vector<int>, int);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        vector<int> dup(n);
        int m = INT32_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            m = min(m, vec[i]);
            dup[i] = vec[i];
        }
        solve(vec, dup, m) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}

bool solve(vector<int> vec, vector<int> dup, int m)
{
    bool res = true;
    sort(dup.begin(), dup.end());
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] % m != 0 && dup[i] != vec[i])
            res = false;
    }
    return res;
}