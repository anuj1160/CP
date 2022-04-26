#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;

ll ar = LLONG_MAX;
ll mod = 1e9 + 7;
void solve()
{
    ll n, k;
    cin >> n >> k;
    // vector<ll> v;
    if (n % 2 == 0 && k % 2 == 1)
    {
        cout << "NO" << endl;
        return;
    }
    else if (n % 2 == 1 && k % 2 == 0)
    {
        cout << "NO" << endl;
        return;
    }
    // for (int i = 1; i < 2*k; i=i+2)
    // {
    //     if (i % 2 == 1)
    //     {
    //         v.push_back(i);
    //     }
    // }
    ll sum, p;
    sum = (2 * k * (2 * k + 1)) / 2 - k*( k + 1);
    if (sum > n)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        cout << "YES" << endl;
        return;
        // p = n - sum;
        // v[k-1]=v[k-1]+p;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
