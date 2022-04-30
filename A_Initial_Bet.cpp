#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;

ll ar = LLONG_MAX;
ll mod = 1e9 + 7;
void solve()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int sum=a+b+c+d+e;
    if(sum%5==0&&sum!=0)
    {
        cout<<sum/5;
    }
    else{
        cout<<"-1"<<endl;
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