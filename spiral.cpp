#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>>);

int main()
{
    vector<vector<int>> A = {{1,2,3,4},
                             {5,6,7,8},
                             {9,10,11,12},
                             {13,14,15,16}};
    
    vector<int> res = spiralMatrix(A);
    for(int i=0; i<res.size(); i++)
    {
        printf("%d ", res[i]);
    }
    printf("\n");
    return 0;
}

vector<int> spiralMatrix(vector<vector<int>> A)
{
    int m = A.size(), n = A[0].size();
    int T=0, B=m-1, L=0, R=n-1;
    int d=0;
    vector<int> res;
    while(L<=R && T<=B)
    {
        if(d==0)
        {
            for(int i=L; i<=R; i++)
            {
                res.push_back(A[T][i]);
            }
            T++;
        }
        else if(d==1)
        {
            for(int i=T; i<=B; i++)
            {
                res.push_back(A[i][R]);
            }
            R--;
        }
        else if(d==2)
        {
            for(int i=R; i>=L; i--)
            {
                res.push_back(A[B][i]);
            }
            B--;
        }
        else if(d==3)
        {
            for(int i=B; i>=T; i--)
            {
                res.push_back(A[i][L]);
            }
            L++;
        }
        d++;
        d %= 4;
    }
    return res;
}