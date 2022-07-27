#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pr;
typedef vector<long long> vll;
#define vi vector<int>
#define vvi vector<vi>
#define vvl vector<vll>
#define pb push_back
#define ho(a) a.begin(), a.end()
#define countsetbit(n) __builtin_popcountll
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

string numtostring(ll n)
{
    return bitset<31>(n).to_string();
}

unsigned long stringtonum(string s)
{
    return bitset<31>(s).to_ulong();
}

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}

int poww(int a, int b)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * 1LL * a) % mod;
        }
        a = (a * 1LL * a) % mod;
        b >>= 1;
    }
    return ans;
}

int mull(ll a, ll b)
{
    int ans = 0;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans + a) % mod;
        }
        a = (a + a) % mod;
        b >>= 1;
    }
    return ans;
}
bool BipartiteDfs(ll node, vvl &adj, vll &vis)
{
    for (auto it : adj[node])
    {
        if (vis[it] == -1)
        {
            vis[it] = 1 - vis[node];
            if (!BipartiteDfs(it, adj, vis))
            {
                return false;
            }
        }
        else if (vis[node] == vis[it])
        {
            return false;
        }
    }
    return true;
}

bool is_prime(ll n)
{
    if (n == 2)
    {
        return true;
    }
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void printPrimeFactors(ll n, vll &fac)
{
    while (n % 2 == 0)
    {
        fac.pb(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            fac.pb(i);
            n = n / i;
        }
    }
    if (n > 2)
        fac.pb(n);
    for (int i = 0; i < n; i++)
    {
        cout << fac[i] << " ";
    }
}

ll rec(vll &d, vector<vector<ll>> &a, ll c, ll &m, bool k)
{
    ll n = 0;
    for (int i = 0; i < a[c].size(); i++)
    {
        ll b = rec(d, a, a[c][i], m, k);
        n = n + b;
    }
    if (m)
    {
        if (n % 2)
            d[c] = 0;
        else
            d[c] = 10 - 9;
        m = m - 1;
        return 1ll;
    }
    else
    {
        if (n % 2)
            d[c] = 5 - 4;
        else
            d[c] = 0;
        return 0ll;
    }
}
// bool good(ll x, ll w, ll h, ll n)
// {
//     return (x / w) * (x / h) >= n;
// }

int good(string k, string s, string p, int l, int r)
{
    string y;
    for (int i = 0; i < s.size(); i++)
    {
        if (i < l || i > r)
        {
            y.pb(s[i]);
        }
    }
    int i = 0, j = 0;
    while (i < y.size() && j < p.size())
    {
        if (y[i] == p[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
        if (j == p.size())
        {
            return (k.size());
        }
    }
    return 0;
}

void solve()
{
    string s, p;
    cin >> s >> p;
    int n = s.size();
    vector<string> v;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            string k = s.substr(i, j);
            maxi = max(maxi, good(k, s, p, i, i + j - 1));
        }
    }
    cout << maxi << "\n";
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