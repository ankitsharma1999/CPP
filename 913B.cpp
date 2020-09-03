#include<iostream>
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
#define debug(x) cout<<#x<<" = "<<x<<endl
#define pb push_back
using namespace std;

void solve();
bool isSpruce(vector<vector<int>>, int);

int main()
{
	int t=1;
	//cin>>t;
	while(t--)
		solve();
	return 0;
}

void solve()
{
    int n;
    cin>>n;
    int prev;
    vector<int> p(n+1);
    vector<vector<int>> tree(n+1);
    for(int i=2; i<=n; i++)
    {
      cin>>p[i];
      tree[p[i]].pb(i);
    }
    isSpruce(tree,1) ? cout<<"Yes" : cout<<"No";
    cout<<"\n";
}

bool isSpruce(vector<vector<int>> tree, int node)
{
  if(tree[node].size() == 0)
    return true;
  int leafChildren=0;
  bool ans=true;
  for(int i=0; i<tree[node].size(); i++)
  {
    if(tree[tree[node][i]].size()==0)
      leafChildren++;
    else
      ans = ans && isSpruce(tree, tree[node][i]);
  }
  return (leafChildren>=3) && ans;
}
