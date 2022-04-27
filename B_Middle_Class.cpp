#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;

ll ar = LLONG_MAX;
ll mod = 1e9 + 7;
bool cmp(int a,int b)
{
    return b < a;
}
void solve()
{
    ll n,x;
    cin>>n>>x;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end(),cmp);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    ll sum=0,k=0;
    bool flag=true;
    for(int i=0;i<n;i++)
    {
      sum+=a[i];
      if(sum>=(i+1)*x)
      {
      k++;
      }
      else{
          cout<<k<<endl;
          return ;
      }
        
    }
    cout<<k<<endl;
}

int main()
{
    int t ;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
