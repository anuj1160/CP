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
    string s = "", t = "", s1, s2, s3;
    ll n,m,k;
    char c1, c2, c3;
    bool tell = false;
    cin >> n >> m;
    vector<string> a(n);
    map<string, ll> f;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        f[a[i]]++;
    }
    for (auto x : a)
    {
        s1 = x;
        reverse(s1.begin(), s1.end());
        if(s1!=x)
        {
            k = min(f[s1], f[x]);
            for (int i = 0; i < k; i++)
            {
                t = t + x;
            }
            f[s1] = f[s1] - k;
            f[x] = f[x] - k;
        }
        else
        {
            k=f[x]/2;
            for (int i = 0; i < k; i++)
            {
                t = t + x;
            }
            f[x]=f[x]-2*k;
        }
    }
    for (auto x : a)
    {
        s1 = x;
        reverse(s1.begin(), s1.end());
        if (f[x] > 0 && s1 == x && x.size() > s.size())
        {
            s = x;
        }
    }
   // cout << s << "\n";
   // cout << t << "\n";
    s = t + s;
    reverse(t.begin(), t.end());
    s = s + t;
    cout << s.size() << "\n"
         << s << "\n";
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
