#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pr;

ll ar = LLONG_MAX;
ll mod = 1e9 + 7;

void solve()
{
    int d;
    cin >> d;
    string v;
    cin>>v;
bool even=false;
if(d%2==0)
{
    for(int i=1;i<=d;i++)
    {
        if(i%2==0&&(v[i-1]-'0')%2==0)
        {
            even=true;
        }
        
       
    }
    if(even)
    {
        cout<<"2"<<endl;
    }
    else{
        cout<<"1"<<endl;
    }
    
}
else{
    bool odd=false;
    for(int i=1;i<=d;i++)
    {
        if(i%2!=0&&(v[i-1]-'0')%2!=0)
        {
            odd=true;
        }
        else{
            odd=false;
        }
       
    }
    if(odd)
    {
        cout<<"1"<<endl;
    }
    else{
        cout<<"2"<<endl;
    }
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