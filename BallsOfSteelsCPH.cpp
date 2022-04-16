#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;
// https://codeforces.com/problemset/problem/1450/B
ll ar = LLONG_MAX;
ll mod = 1e9 + 7;
void solve()
{
      int n,k;
      cin>>n>>k;
      vector<pair<int,int>>a(n);
      for(auto &i : a)
      {
          cin>>i.first>>i.second;
      }
      int ans=-1;
      for(int i=0;i<n;i++)
      {
          int mx=0;
          for(int j=0;j<n;j++)
          {
              mx=max(mx,abs(a[i].first-a[j].first)+abs(a[i].second-a[j].second));
          }
          if(mx<=k)
          {
              ans=1;
          }
      }
      cout<<ans<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}