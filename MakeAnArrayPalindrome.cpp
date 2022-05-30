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
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int p = 0; p < n; p++)
    {
        cin >> v[p];
    }
    int i = 0, j = n - 1;
    int k = 0;
    int sum = 0;
    bool tell = true;
    while (i < j)
    {
        if (v[i] == v[j])
        {
            i++;
            j--;
        }
        else
        {
            tell = false;
            sum += v[i];
            k++;
            if (sum == v[j])
            {
                sum = 0;
                j--;
            }
            i++;
        }
    }
    if (sum == 0 && tell == false)
    {
        cout << k - 1 << "\n";
    }
    else if (sum == 0 && tell)
    {
        cout << "0";
    }
    else
    {
        cout << n - 1;
    }
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