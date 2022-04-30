#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;

ll ar = LLONG_MAX;
ll mod = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(v[i], maxi);
    }
    vector<int> v2;
    for (int i = 1; i <= maxi; i++)
    {
        if (maxi % i == 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (v[j] == i)
                {
                    v[j] = -1;
                    break;
                }
            }
        }
    }
    int maxi2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > maxi2 && v[i] >= 1)
        {
            maxi2=v[i];
        }
    }
    cout<<maxi<<" "<<maxi2;
}

int main()
{
    int t=1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}