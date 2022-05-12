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
    ll m,n;
    cin>>n>>m;
    ll res=n/m;
    ll rem=n%m;
    cout<<rem*(res*(res+1)/2)+(m-rem)*res*(res-1)/2<<" "<<(n-m+1)*(n-m)/2;
}

int main()
{
    int t=1 ;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
