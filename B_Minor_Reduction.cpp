#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;

ll ar = LLONG_MAX;
ll mod = 1e9 + 7;
void solve()
{
    ll x;
    cin >> x;
    string s = "";
    ll k = x;
    ll sum = 0;
    int p = 0;
    ll r = 0;
    ll n = log10(x) + 1;
    bool flag = true;
    while (k > 0)
    {
        p++;
        sum += k % 10;
        s = to_string(k % 10) + s;
        k = k / 10;
        r++;

        if (p == 2)
        {
            if (sum >= 10)
            {
                s.pop_back();
                s.pop_back();
                s = to_string(sum) + s;
                flag = false;
            }
            sum = 0;
            p = 0;
        }
        else if (r == n)
        {

            if (flag)
            {
                s.pop_back();
                s.pop_back();
                s = to_string(sum) + s;
            }
            break;
        }
    }
    cout << s << endl;
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