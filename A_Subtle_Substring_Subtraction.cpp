#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;

ll ar = LLONG_MAX;
ll mod = 1e9 + 7;
void solve()
{
    string s;
    cin >> s;
    int sum = 0;
    if (s.size() == 1)
    {
        sum = s[0] - 96;
        cout << "Bob " << sum << endl;
        return;
    }
    else if (s.size() % 2 == 0)
    {
        for (int i = 0; i < s.size(); i++)
        {
            sum += s[i] - 96;
        }
        cout << "Alice " << sum << endl;
        return;
    }
    else
    {
        if (s[0] > s[s.size() - 1])
        {
            for (int i = 0; i < s.size() - 1; i++)
            {
                sum += s[i] - 96;
            }
            cout << "Alice " << sum-s[s.size()-1]+96 << endl;
        }
        else
        {
            for (int i = 1; i < s.size(); i++)
            {
                sum += s[i] - 96;
            }
            cout << "Alice " << sum-s[0]+96 << endl;
        }
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
}