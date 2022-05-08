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
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<ll> v2(n);
    for (int i = 0; i < n; i++)
    {
        v2[i] = v[i];
    }
    sort(v2.begin(), v2.end());
    int p=0;
    for(int i=0;i<n-1;i++)
    {
      if(v[i+1]>v[i])
      {
          p=i+1;
      }
      else{
          break;
      }
    }
    int r=0;
    // bool tell=true;
    for(int i=p;i<n-1;i++)
    {
        if(v[i+1]<v[i])
        {
            r=i+1;
            // tell=false;
        }
        else{
            break;
        }
    }
    if(p==n-1)
    {
        cout<<"yes"<<endl;
        cout<<"1"<<" "<<"1";
        return;
    }
    reverse(v.begin()+p,v.begin()+r+1);
    if(v==v2)
    {
        cout<<"yes\n";
        cout<<p+1<<" "<<r+1;
        return;
    }
    else{
        cout<<"no";
        return;
    }
}
// return 0;

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
