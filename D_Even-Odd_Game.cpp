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
bool cmp2(ll a, ll b)
{
    return b < a;
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
    sort(v.begin(), v.end(), greater<>());
    ll sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (v[i] % 2 == 0)
            {
                sum1 += v[i];
            }
        }
        else
        {
            if (v[i] % 2 == 1)
            {
                sum2 += v[i];
            }
        }
    }

    if (sum1==sum2)
    {
        cout << "Tie\n";
    }
    else if (sum2 > sum1)
    {
        cout << "Bob\n";
    }
    else
    {
        cout << "Alice\n";
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