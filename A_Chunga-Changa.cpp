#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;

ll ar = LLONG_MAX;
ll mod = 1e9 + 7;
void solve()
{
    long long x,y,z;
    cin>>x>>y>>z;
    ll s;
    // if(z>x&&z>y)
    // {
    //     cout<<"0"<<" 0"<<endl;
    //     return;
    // }
    if(x%z==0&&y%z==0)
    {
        s=x/z+y/z;
        cout<<s<<" "<<"0\n";
        return;
    }
    else{
        s=x/z+y/z;
        if(x%z+y%z>=z)
        {
            s=s+1;
        }
        else{
            cout<<s<<" "<<"0"<<endl;
            return;
        }
        if(x%z>y%z)
        {
            
            cout<<s<<" "<<z-x%z<<endl;
            return;
        }
        else{
            cout<<s<<" "<<z-y%z<<endl;
        }
    }

}

int main()
{
    int t=1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}