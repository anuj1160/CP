#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;

ll ar = LLONG_MAX;
ll mod = 1e9 + 7;
void solve()
{
    string s;
    cin >> s;
    int sum;
    int k = 0;
    for (int i = s.size() - 1; i > 0; i--)
    {
        sum = s[i] - 48 + s[i - 1] - 48;
        if (sum > 9)
        {
            s.replace(i-1,2,to_string(sum));
            k++;
            break;
        }
        
    }
    if(k==0)
    {
        sum=s[0]-48+s[1]-48;
        s.replace(0,2,to_string(sum));
    }
    cout<<s<<endl;
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