#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;

ll ar = LLONG_MAX;
ll mod = 1e9 + 7;
void solve()
{
    vector<string> a={"Sheldon", "Leonard", "Penny", "Rajesh" , "Howard" };
    ll n,ans;
    cin>>n;
    ll k=5,r=1;
    ll sum=0;                                            ;
    while(sum+k<=n)
    {
        sum+=k;
        k=k*2;
        r=r*2;   
    }
    ll req=n-sum;
    ans=req/r;
    if(req%r!=0)
    ans++;
    else if(ans==0)
    ans=5;
    //cout<<ans<<"\n";
    cout<<a[ans-1]<<"\n";
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
