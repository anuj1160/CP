#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;

ll ar = LLONG_MAX;
ll mod = 1e9 + 7;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    map<int,int>mp;
    vector<int>v2(n);
    int k=0;
    for(int i=n-1;i>=0;i--)
    {
        if(mp[v[i]]==0)
        {
            k++;
            v2[i]=k;
            mp[v[i]]++;
        }
        else{
            v2[i]=k;
        }
    }
    while(m--)
    {
        int x;
        cin>>x;
        cout<<v2[x-1]<<endl;
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