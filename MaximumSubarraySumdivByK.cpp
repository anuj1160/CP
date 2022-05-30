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

void solve()
{
    ll n, k, ans = 0;
    cin >> n >> k;
    vll v(n), f(k, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    v[0] = v[0] % k;
    for (int i = 1; i < n; i++)
    {
        v[i] = v[i] + v[i - 1];
        v[i] = v[i] % k;
    }
    map<ll, ll> mp;
    f[0]++;
    mp[0] = -1;
    for (ll i = 0; i < n; i++)
    {
        if (f[v[i]])
        {
            ans = max(i - mp[v[i]], ans);
        }
        else
        {
            f[v[i]]++;
            mp[v[i]] = i;
        }
    }
    cout << ans << "\n";
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}