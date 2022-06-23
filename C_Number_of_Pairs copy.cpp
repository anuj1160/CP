#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pr;
typedef vector<long long> vll;
#define pb push_back
#define ho(a) a.begin(), a.end()
ll aj = LLONG_MAX;
ll mod = 1e9 + 7;
bool cmp(pr a, pr b)
{
    return a.second < b.second;
}
ll binpow3(ll a, ll b)
{
    ll res = 1;
    a = a % mod;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b = b >> 1;
    }
    return res;
}
int setBitNumber(int r)
{
    if (r == 0)
        return 0;

    int msb = 0;
    r = r / 2;
    while (r != 0)
    {
        r = r / 2;
        msb++;
    }

    return (1 << msb);
}

void solve()
{
    ll n,l,r;
    cin>>n>>l>>r;
    vll v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(ho(v));
    ll ans=0,ans1=0;
    for(ll i=0;i<n;i++)
    {
        ll low=i+1,high=n-1;
        ll s=r-v[i];
        while(low<=high)
        {
            ll mid=(low+high)/2;
            if(v[mid]<=s)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        ans=ans+(high-i);

        ll low1=i+1,high1=n-1;
        ll s1=l-v[i]-1;
        while(low1<=high1)
        {
            ll mid1=(low1+high1)/2;
            if(v[mid1]<=s1)
            {
                low1=mid1+1;
            }
            else{
                high1=mid1-1;
            }
        }
        ans1=ans1+(high1-i);

    }
     cout<<ans-ans1<<"\n";
}

int main()
{
    int t = 1;
    cin >> t;
    
    while (t--)
    {
        solve();
    }
}