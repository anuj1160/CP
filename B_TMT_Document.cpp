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
    string s;
    cin >> s;
    int c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'T')
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    if (c1 != 2 * c2)
    {
        cout << "NO\n";
        return;
    }
    else
    {
        int o1 = 0, o2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T')
            {
                o1++;
            }
            else{
                o2++;
            }
            if(o1<o2||c1-o1<c2-o2)
            {
                cout<<"NO\n";
                return ;
            }
            
        }
    }
    cout<<"YES"<<endl;
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
