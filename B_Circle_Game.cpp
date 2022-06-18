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

void solve(int r)
{
    ll n;
    cin >> n;
    vll v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n % 2 == 1)
    {
        cout << "Mike\n";
        return;
    }
    ll mini = *min_element(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        v[i] -= mini;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            if (i % 2 != 0)
            {
                cout << "Mike" << endl;
                return;
            }
            else
            {
                cout << "Joe" << endl;
                return;
            }
        }
    }

    
}

int main()
{
    int t = 1, r = 1;
    cin >> t;
    while (t--)
    {
        solve(r);
        r++;
    }
}