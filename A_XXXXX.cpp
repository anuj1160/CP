#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pr;

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
    vector<ll> v(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    if (sum % k != 0)
    {
        cout << n << "\n";
        return;
    }
    int p = 0;
    ll maxi = -1;
    ll sum1 = sum;
    for (int i = 0; i < n; i++)
    {
        sum1 = sum1 - v[i];
        p++;
        if (sum1 % k != 0)
        {
            maxi = max(maxi, n - p);
            break;
        }
    }
    ll sum2 = sum;
    p=0;
    for (int i = n - 1; i >= 0; i--)
    {
        sum2 = sum2 - v[i];
        p++;
        if (sum2 % k != 0)
        {
            
            maxi = max(maxi, n - p);
            break;
        }
    }
    cout<<maxi<<"\n";
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