#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;

ll ar = LLONG_MAX;
ll mod = 1e9 + 7;
void solve()
{
    int n;
    ll temp2=0;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            temp2=1;
            break;
        }
    }
    ll neg = 0, pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            neg++;
        }
    }
    pos = n - neg;
    ll ans = 0, temp = 0;
    if (neg % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
            {
                ans = ans + (-1 - arr[i]);
            }
            else if(arr[i]==0)
            {
                ans=ans+1;
            }
            else
            {
                ans = ans + (arr[i] - 1);
            }
        }
    }
   
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0 && temp == 0)
            {
                ans = ans + (1 - arr[i]);
                temp = 1;
            }
            else if (arr[i] < 0)
            {
                ans = ans + (-1 - arr[i]);
            }
            else if(arr[i]==0)
            {
                ans=ans+1;
            }
            else
            {
                ans = ans + (arr[i] - 1);
            }
        }
        if(temp2==1)
        {
            ans=ans-2;
        }
    }
    cout<<ans<<endl;
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
