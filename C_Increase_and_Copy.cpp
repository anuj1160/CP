#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;

ll ar = LLONG_MAX;
ll mod = 1e9 + 7;
bool cmp(int a, int b)
{
    return b < a;
}

void solve()
{
    ll n;
    cin>>n;
    ll x=sqrt(n);
    ll sum=x+ceil((1.0)*(n-x)/x)-1;
    cout<<sum<<"\n";
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
