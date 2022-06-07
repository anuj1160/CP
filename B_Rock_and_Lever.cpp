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
    vll v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {

        ll msb = 0;
        v[i] = v[i] / 2;
        while (v[i] != 0)
        {
            v[i] = v[i] / 2;
            msb++;
        }
        mp[msb]++;
    }
    ll sum = 0;
    for (auto x : mp)
    {
        ll p = x.second;
        sum = sum + p * (p - 1) / 2;
    }
    cout << sum << "\n";
    return;
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