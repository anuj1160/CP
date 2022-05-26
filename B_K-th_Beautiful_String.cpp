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
    int n, k;
    cin >> n >> k;
    string s = "";
    for (int i = 0; i < n; i++)
    {
        s.push_back('a');
    }
    int ind1, ind2;

    for (int i = 0; i < n; i++)
    {
        if (k - i - 1 <= 0)
        {

            ind2 = n - k;
            ind1 = n - 2 - i;
            break;
        }

        k = k - i - 1;
    }

    s[ind1] = 'b';
    s[ind2] = 'b';
    cout << s << "\n";
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