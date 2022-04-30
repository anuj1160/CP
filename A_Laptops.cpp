#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;

ll ar = LLONG_MAX;
ll mod = 1e9 + 7;
bool cmp(pr a,pr b)
{
    return a.second<b.second;
}
void solve()
{
    vector<pr>v;
     int n;
     cin>>n;
     while(n--)
     {
        int a,b;
        cin>>a>>b;
        // vector<pr>v;
        v.push_back(make_pair(a,b));
     }
     sort(v.begin(),v.end(),cmp);
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i].first<<" "<<v[i].second<<" "<<endl;
    // }
    for(int i=1;i<v.size();i++)
    {
      if(v[i].first<v[i-1].first)
      {
          cout<<"Happy Alex";
          return;
      }
    }
    cout<<"Poor Alex";
}

int main()
{
    int t=1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
