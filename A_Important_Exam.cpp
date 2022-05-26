#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pr;

ll ar = LLONG_MAX;
ll mod = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> st;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        st.push_back(s);
    }
    vector<ll> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    map<char, int> mp;
    int sum = 0;
    int maxi;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mp[st[j][i]]++;
        }
         maxi = 0;
        for (auto x : mp)
        {
            if (x.second > maxi)
            {
                maxi = x.second;
            }
        }
        sum += maxi * v[i];
        mp.clear();
    }
    cout<<sum<<"\n";
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