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
    int arr[n+1];
    int prr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        prr[arr[i]]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<prr[i]<<" ";
    }
    
}
int main()
{
    int x=1;
    // cin >> t;
    while (x--)
    {
        solve();
    }
}