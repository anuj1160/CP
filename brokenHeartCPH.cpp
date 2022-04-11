#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;
ll ar = LLONG_MAX;
ll mod = 1e9 + 7;
void solve()
{
    string s;
    cin>>s;
    vector<bool>A(26,0);
    for(int i=0;i<s.size();i++)
    {
        int j=i;
        while(j+1<s.size()&&s[j+1]==s[i])
        {
            j++;
        }
        if((j-i)%2==0)
        
           A[s[i]-'a']=true;
           
           i=j;
           
        
    }
    for(int i=0;i<26;i++)
    {
        if(A[i])
        cout<<char('a'+i);
    }
    cout<<endl;
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