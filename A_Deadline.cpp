#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;

ll ar = LLONG_MAX;
ll mod = 1e9 + 7;
void solve()
{
    ll n, d;
    cin >> n >> d;
    if (n >= d)
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        ll ans = 0;
        ll l = 1, h = 1e9+2;
           ll k=LLONG_MAX;
        // cout<<x+ceil(double(d/(x+1)))<<endl;

        while (l <= h)
        {
            ll x = l + (h - l) / 2;
                    if(d%(x+1)==0)
                    {
                        k=x+d/(x+1);
                    }
                    else{
                        k=x+d/(x+1)+1;
                    }
            if (k <= n)
            {
                cout << "YES" << endl;
                return;
            }
            else
            {
                h = x-1 ;
            }
        }
    }
    cout << "NO" << endl;
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