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
int setBitNumber(int r)
{
    if (r == 0)
        return 0;

    int msb = 0;
    r = r / 2;
    while (r != 0)
    {
        r = r / 2;
        msb++;
    }

    return (1 << msb);
}

void solve()
{
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            count++;
        }
    }
    cout << count * 3 << " ";
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {

            cout << i + 1 << " 1 " << i + 1 << " ";
        }
    }
    cout << "\n";
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