#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;

ll ar = LLONG_MAX;
ll mod = 1e9 + 7;
void solve()
{
    ll n=0,mod=998244353,x,y,z,k,d1=0,d2=0,r,ans=0,a,b;
    string s,t="",s1,s2,s3;
    cin>>a>>b>>x>>y>>n;
    ll a1,b1,m;
    r=a-x,m=n;
    if(r<n)
    {
        a1=x;
        m=m-r;
        r=b-y;
        if(r<m)
            b1=y;
        else
            b1=b-m;
    }
    else
    {
        a1=a-n;
        b1=b;
    }
    ll ans1=a1*b1;
    r=b-y,m=n;
    if(r<n)
    {
        b1=y;
        m=m-r;
        r=a-x;
        if(r<m)
            a1=x;
        else
            a1=a-m;
    }
    else
    {
        b1=b-n;
        a1=a;
    }
    ll ans2=a1*b1;
    cout<<min(ans1,ans2)<<"\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}