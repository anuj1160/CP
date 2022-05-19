#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;
ll ar = LLONG_MAX;
ll mod = 1e9 + 7;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int o=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            o++;
        }
    }
    if(o%2==0)
    {
        cout<<"BOB\n";
    }
    else if(o==1)
    {
            cout<<"BOB\n";
    }
    else if(o%2==1)
    {
        cout<<"ALICE\n";
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