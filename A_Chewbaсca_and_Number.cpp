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
    ll n1=n;
    ll y = n;
    ll r;
    ll u=0;
    while(y)
    {
        y=y/10;
        u++;
    }
    // cout<<u<<"\n";
    string s = "";
    while (u--)
    {
        r = n % 10;
        char o = r + '0';
        if (9 - r < r)
        {
            if (u == 0 && 9 - r == 0)
            {
                s = '9' + s;
            }
            else
            {
                char c = '9' - char(r);
                s = c + s;
                n = n / 10;
            }
        }
        else
        {
            // char o = char(r);
            s = o + s;
            n = n / 10;
        }
    }
    stringstream ss;
    ll myint1;
    ss << s;
    ss >>myint1 ;
    if (myint1 == 0)
    {
        cout << n1 << "\n";
        return;
    }
    cout << myint1 << "\n";
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