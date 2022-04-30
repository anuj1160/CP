#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;

ll ar = LLONG_MAX;
ll mod = 1e9 + 7;
bool cmp(pr a, pr b)
{
    return a.second < b.second;
}
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
        if (v[i] == 50)
        {
            if (mp[25] < 1)
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                mp[25]--;
            }
        }
        else if (v[i] == 100)
        {
            if (mp[50] > 0 && mp[25] > 0)
            {
                mp[25]--;
                mp[50]--;
            }
            else if (mp[25] >= 3)
            {
                mp[25] = mp[25] - 3;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
