#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;

ll ar = LLONG_MAX;
ll mod = 1e9 + 7;
void solve()
{
    ll n,ans=-1;
    ll x;
    cin >> n >> x;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll c = a[0];
    ll f = 1;
    //ll ans = 0;
    for (int i = 1; i < 1e4; i++)
    {
        int idx,k=0;
        for(int j=0;j<n-1;j++)
        {
            if(a[j+1]>a[j])
            {
                a[j]++;
                idx=j+1;
                k++;
                break;
            }
            
        }
        if(k==0)
        {
            cout<<"-1\n";
            return;
        }
        if(i==x)
        {
            ans=idx;
            break;
        }
    }
    cout<<ans<<"\n";
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