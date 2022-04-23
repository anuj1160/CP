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
    int a, b;
    int p = 0, q = 0;
    int mini = INT_MAX;
    bool tel=true;
    for (b = 0; b < n; b++)
    {
        int k = (n - b * 7);

        if (k % 4 == 0 && k >= 0)
        {
            a = k / 4;
            if (a + b < mini)
            {
                mini = a + b;
                p = a, q = b;
                tel=false;
            }
            else if (a + b == mini)
            {
                if (b < q)
                {
                    p = a, q = b;
                }
            }
        }
    }
    while (p--)
    {
        cout << "4";
    }
    while (q--)
    {
        cout << "7";
    }
    if(tel)
    {
        cout<<"-1";
        cout<<endl;
        return;
    }
   
    cout << endl;
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
