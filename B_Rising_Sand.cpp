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
    ll n, k;
    cin >> n >> k;
    vll v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    if (k == 1)
    {
        cout << (n - 1) / 2<<"\n";
        return;
    }
    ll p = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] > v[i - 1] + v[i + 1])
        {
            p++;
        }
    }
    cout << p << "\n";
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