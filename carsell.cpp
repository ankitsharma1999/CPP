# include<vector>
# include<algorithm>
# include<cstdio>
using namespace std;

int calcCost(vector<int>);

int main()
{
    int testCases=0, n=0, temp;
    vector<int> profit, A;
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
        profit.push_back(calcCost(A));
    }
    for(int i=0; i<profit.size(); i++)
    {
        printf("%d\n",profit[i]);
    }
    return 0;
}

int calcCost(vector<int> costList)
{
    sort(costList.rbegin(), costList.rend());
    long cost=0;
    for(int i=0; i<costList.size(); i++)
    {
        if(costList[i]-i<0)
        {
            cost = cost;
        }
        else
        {
            cost += (costList[i]-i);
        }
        
    }
    return int(cost%1000000007);
}