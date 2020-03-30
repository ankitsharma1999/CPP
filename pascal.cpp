// Generate Pascal Triangle taking number of rows as input
/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
*/

# include <iostream>
# include <cstdio>
# include <vector>
using namespace std;

vector<vector<int>> pascalGen(int);

int main()
{
    int m;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    vector<vector<int>> res = pascalGen(m);
    for(int i=0; i<res.size(); i++)
    {
        for(int j=0; j<res[i].size(); j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}

vector<vector<int>> pascalGen(int rows)
{
    vector<vector<int>> res;
    vector<int> temp;
    for(int i=0; i<rows; i++)
    {
        temp={};
        for(int j=0; j<=i; j++)
        {
            if(j==0 || j==i)
            {
                temp.push_back(1);
            }
            else
            {
                temp.push_back(res[i-1][j-1]+res[i-1][j]);
            }
        }
        res.push_back(temp);
    }
    return res;
}