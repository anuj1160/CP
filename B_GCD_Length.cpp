#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;

ll ar = LLONG_MAX;
ll mod = 1e9 + 7;
void solve()
{
    vector<long long> v;
    v.push_back(3);
    v.push_back(11);
    v.push_back(101);
    v.push_back(1009);
    v.push_back(10007);
    v.push_back(100003);
    v.push_back(1000003);
    v.push_back(10000019);
    v.push_back(100030001);
    int a, b, c;
    long long x;
    cin >> a >> b >> c;
    x = v[c - 1];
    int s = 0;
    long long ans1=0;
    while (true)
    {
        long long p = x;

        while (p > 0)
        {
            p = p / 10;
            s++;
        }
        if(s==a)
        {   
               ans1=x;
            break;
        }
        x = x * 2;
        s=0;
    }

    x = v[c - 1];
     s = 0;
    long long ans2=0;
    while (true)
    {
        long long p = x;

        while (p > 0)
        {
            p = p / 10;
            s++;
        }
        if(s==b)
        {
            ans2=x;
            break;
        }
        x = x * 3;
        s=0;
    }
    cout<<ans1<<" "<<ans2<<endl;
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