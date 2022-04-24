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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }
    int f = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (mp[v[i]] > f)
        {
            f=mp[v[i]];
        }
    }
    int p=mp.size();
    int maxi=max(min(f-1,p),min(f,p-1));
    cout<<maxi<<endl;
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