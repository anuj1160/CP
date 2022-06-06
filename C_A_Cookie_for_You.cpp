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
    ll v, c, n, m;
    cin >> v >> c >> n >> m;
    if (c < v)
    {
        c -= m;
        if (c < 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    else
    {
        v -= m;

        if (v < 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    if (v + c >= n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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