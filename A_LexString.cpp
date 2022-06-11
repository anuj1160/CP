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
    ll n, m, k;
    cin >> n >> m >> k;
    string s1, s2;
    cin >> s1 >> s2;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    int i = 0, j = 0;
    vector<char> v;
    int r = 0, p = 0;
    while (i < n && j < m)
    {
        if (s1[i] < s2[j] && r < k || p == k)
        {
            v.push_back(s1[i]);
            r++;
            p = 0;
            i++;
        }
        else
        {
            if (p < k)
            {
                v.push_back(s2[j]);
                p++;
                r = 0;
                j++;
            }
        }
    }
    for (int k = 0; k < v.size(); k++)
    {
        cout << v[k];
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