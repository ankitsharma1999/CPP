#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int>, vector<int>);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> A(3);
        vector<int> B(3);
        cin >> A[0] >> A[1] >> A[2];
        cin >> B[0] >> B[1] >> B[2];
        cout << solve(A, B) << "\n";
    }
    return 0;
}

int solve(vector<int> A, vector<int> B)
{
    int ans = 0;
    int numTwoOnes = min(A[2], B[1]);
    ans += 2 * numTwoOnes;
    A[2] -= numTwoOnes;
    B[1] -= numTwoOnes;
    if (A[1] <= (B[0] + B[1]))
        return ans;
    int numOnesInA = A[1] - (B[0] + B[1]);
    ans -= 2 * min(numOnesInA, B[2]);
    return ans;
}