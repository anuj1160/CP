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
    ll n;
    cin >> n;
    vll a;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.pb(x);
    }
    vll b;
    b = a;
    sort(b.begin(), b.end());
    ll gc = *min_element(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        if (a[i] % gc == 0)
        {
        }
        else
        {
            if (b[i] != a[i])
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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