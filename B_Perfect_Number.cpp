#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;

ll ar = LLONG_MAX;
ll mod = 1e9 + 7;
void solve()
{
   int k;
   cin>>k;
   int p=0;
   for(int i=19;i<=20000000;i++)
   {
    //    p++;
       int s=i;
       int sum=0;
       while(s>0)
       {
          sum+=s%10;
          s=s/10;
       }
       if(sum==10)
       {
           p++;
           if(p==k)
           {
               cout<<i<<endl;
               return ;
           }
       }
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