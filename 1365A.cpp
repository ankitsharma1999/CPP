#include<iostream>
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
#define debug(x) cout<<#x<<" = "<<x<<endl;
#define pb push_back
using namespace std;

void solve();

int main()
{
	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}

void solve()
{
  int n, m;
  cin>>n>>m;
  int cnt = 0, nR = n, nC = m;
  vector<vector<int>> a(n, vector<int>(m,0));
  for(int i=0; i<n; i++)
  {
    cnt=0;
    for(int j=0; j<m; j++)
    {
      cin>>a[i][j];
      if(a[i][j] == 1) cnt++;
    }
    if(cnt) nR--;
  }
  for(int i=0; i<m; i++)
  {
    cnt=0;
    for(int j=0; j<n; j++)
    {
      if(a[j][i]==1) cnt++;
    }
    if(cnt) nC--;
  }
  min(nR, nC)%2==0 ? cout<<"Vivek" : cout<<"Ashish";
  cout<<"\n";

}
