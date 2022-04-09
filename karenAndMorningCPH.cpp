#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pr;
// https://codeforces.com/contest/816/problem/A
ll ar = LLONG_MAX;
ll mod = 1e9 + 7;
void solve()
{
    string s1;
    cin >> s1;
    string s2 = "";
    s2 = s2 + s1[0];
    s2 = s2 + s1[1];
    int myint2 = stoi(s2);
    string s3 = "";
    s3 = s3 + s1[3] + s1[4];
    int myint3 = stoi(s3);
    string s4="";
    s4=s4+s1[1]+s1[0];
    int myint4=stoi(s4);
    int k=0;
    while(myint3!=myint4)
    {
      k++;
            myint3++;
            if(myint3==60)
            {
                myint3=0;
                myint2++;
                myint4=myint2;
                int rev=(myint4%10)*10+myint4/10;
                myint4=rev;
            }  
            if(myint2==24)
            {
                myint2=0;
                myint4=0;
            }
    }
    cout<<k<<endl;
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