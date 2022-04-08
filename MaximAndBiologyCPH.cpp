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
    string s;
    string s2 = "ACTG";
    cin >> s;
    int maxi = INT_MAX;
    // cout<<s[0]-s2[0];

    for (int i = 0; i < s.size() - 3; i++)
    {
        int k = 0, ans = 0;
        for (int j = i; j < i + 4; j++)
        {
            if (abs(s[j] - s2[k]) == 25)                      
                                                    //  https://codeforces.com/problemset/problem/1151/A
            {
                ans = ans + 1;
               
            }
            else{
            
                ans = ans+min(abs(s[j] - s2[k]),abs(26-abs(s[j] - s2[k])));
                // cout<<ans<<endl;
            }
            k++;
            
        }
        maxi = min(ans, maxi);
    }
    cout << maxi << endl;
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}