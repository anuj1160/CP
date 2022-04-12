#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;
// https://codeforces.com/problemset/problem/1277/A
ll ar = LLONG_MAX;
ll mod = 1e9 + 7;
void solve()
{
    long long n;
    cin>>n;
    ll b = 0;
    ll ans = 0;
    for (int i = 1; i <= 9; i++)
    {
        b = b * 10 + 1;
        for (int j = 1; j <= 9; j++)
        {
            if (b*j<=n)
            {
                ans++;
            }
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