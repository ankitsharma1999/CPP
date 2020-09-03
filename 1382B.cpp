#include<iostream>
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
#define debug(x) cout<<#x<<" = "<<x<<endl
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
    int n;
    cin>>n;
    vector<int> a(n);
    int numOne = 0;
    bool isOne = true;
    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++)
    {
        if(a[i] == 1)
            isOne = !isOne;
        else
        {
          isOne = !isOne;
          break;
        }
    }
    if(!isOne)
        cout<<"First";
    else
        cout<<"Second";
    cout<<"\n";
}

