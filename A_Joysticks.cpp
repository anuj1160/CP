#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;

ll ar = LLONG_MAX;
ll mod = 1e9 + 7;

int mem(int n,int m,vector<vector<int>> &dp,vector<vector<int>> &vis)
{
    if(n==1 && m==1 || m<1 || n<1)
    return 0;
    if(vis[n][m])
    {
        return dp[n][m];
    }
    
        dp[n][m]=1+max(mem(n-2,m+1,dp,vis),mem(n+1,m-2,dp,vis));
        vis[n][m]=1;
    return dp[n][m];
}


void solve()
{
   int n,m;
   cin>>n>>m;
   vector<vector<int>> dp(200,vector<int> (200,-1));
   vector<vector<int>> vis(200,vector<int> (200,0));
   cout<<mem(n,m,dp,vis);
}

int main()
{
    int t=1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
}