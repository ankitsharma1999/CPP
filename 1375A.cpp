#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        solve(vec);
    }
    return 0;
}

void solve(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (i % 2 == 0)
        {
            vec[i] = vec[i] < 0 ? vec[i] : vec[i] * (-1);
        }
        else
        {
            vec[i] = vec[i] >= 0 ? vec[i] : vec[i] * (-1);
        }
        cout << vec[i] << " ";
    }
    cout << "\n";
}