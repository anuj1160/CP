#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;

ll ar = LLONG_MAX;
ll mod = 1e9 + 7;
bool cmp(int a, int b)
{
    return b < a;
}

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int k = 1;
    int p;
    if (v[0] > 0)
    {
        p = 1;
    }
    else
    {
        p = 0;
    }
    ll sum = v[0];
    ll s = sum;
    ll r = sum;
    for (int i = 1; i < n; i++)
    {
        if (v[i] < 0 && p == 1)
        {
            sum += v[i];
            s = v[i];
            p = 0;
        }
        else if (v[i] < 0 && v[i] > s)
        {
            sum += v[i] - s;
            s = v[i];
        }

        if (v[i] > 0 && p == 0)
        {
            sum += v[i];

            p = 1;
            r = v[i];
        }
        else if (v[i] > 0 && v[i] > r)
        {
            sum += v[i] - r;
            r = v[i];
        }
    }
    cout << sum << endl;
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
