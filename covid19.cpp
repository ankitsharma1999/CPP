# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;

bool isFollowed(vector<int>);

int main()
{
    int testCases=0, n=0, temp;
    vector<int>  A;
    vector<bool> res;
    scanf("%d", &testCases);
    for(int i=0; i<testCases; i++)
    {
        scanf("%d",&n);
        A={};
        for(int j=0; j<n; j++)
        {
            scanf("%d",&temp);
            A.push_back(temp);
        }
        res.push_back(isFollowed(A));
    }
    for(int i=0; i<res.size(); i++)
    {
        if(res[i]==true)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    }
    return 0;
}

bool isFollowed(vector<int> A)
{
    bool res=true;
    reverse(A.begin(), A.end());
    int c=5;
    for(int i=0; i<A.size(); i++)
    {
        if(A[i]==1)
        {
            if(c/5 == 0)
            {
                res = false;
                break;
            }
            else
            {
                res = true;
            }
            
            c=0;
        }
        else if(A[i]==0)
        {
            c++;
        }
    }
    return res;
}