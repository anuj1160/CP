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
    vll v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sum1 = v[0];
    ll sum2 = 0;
    int i = 1, j = n - 1;
    ll add1=sum1,add2=0;
    ll k=1;
    while (i <= j)
    {
        bool f1=false;
        while (sum1 >= sum2&&i<=j)
        {
            sum2 += v[j];
            j--;
            f1=true;
        }
        add2=add2+sum2;
        if(f1)
        k++;
        sum1=0;
        bool f2=false;
        while (sum1 <= sum2 &&i<=j)
        {
            sum1 += v[i];
            i++;
            f2=true;
        }
        if(f2)
        k++;
        add1+=sum1;
        
        sum2=0;
    }
    cout<<k<<" "<<add1<<" "<<add2<<"\n";
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