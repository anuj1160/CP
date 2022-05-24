#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pr;

ll mridul = LLONG_MAX;
ll mod = 1e9 + 7;
vector<ll> adj[101][101];
// vector<bool> visited(100001,false);
vector<ll> prime;
vector<ll> no(10000);
vector<ll> gdb(1001, INT_MAX);

bool comp(const pr &v1, const pr &v2)
{

    return v1.first < v2.first;
}

bool comp1(const pair<string, int> &v1, const pair<string, int> &v2)
{
    return v1.second > v2.second;
}

struct comp1
{
    bool operator()(pair<ll, ll> a, pair<ll, ll> b)
    {
        if (a.first == b.first)
            return (a.second > b.second);
        return a.first < b.first;
    }
};

ll abs(ll a, ll b)
{
    if (a > b)
        return a - b;
    else
        return b - a;
}

// int using_dfs(int current,int m)
// { rn m;

// }

int mem(int n, int t, vector<int> &a, vector<int> &dp, vector<bool> &vis)
{
    if (t == 0)
        return 1;
    if (vis[t])
        return dp[t];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (t - a[i] >= 0)
            ans = (ans + mem(n, t - a[i], a, dp, vis)) % mod;
    }
    vis[t] = true;
    dp[t] = ans;
    return ans;
}

void sieve()
{

    bool vis[10001];

    memset(vis, true, sizeof(vis));

    for (ll p = 2; p * p <= 10000; p++)
    {

        if (vis[p] == true)
        {

            for (ll i = p * p; i <= 10000; i += p)
                vis[i] = false;
        }
    }

    for (ll p = 2; p <= 10000; p++)
        if (vis[p])
            prime.push_back(p);
}

bool check_prime(ll n)
{
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

ll cd(ll n)
{
    ll cnt = 0;
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                cnt++;

            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    return cnt;
}

void dfs(vector<vector<ll>> &adj, vector<ll> &vis, ll curr, ll i, map<pr, ll> &no)
{
    //  cout<<"\n"<<n<<"\n";
    vis[curr] = 1;
    for (auto x : adj[curr])
    {
        if (!vis[x])
        {
            if (i % 2 == 0)
            {
                no[{curr, x}] = 2;
                no[{x, curr}] = 2;
            }
            else
            {
                no[{curr, x}] = 3;
                no[{x, curr}] = 3;
            }
            dfs(adj, vis, x, i + 1, no);
        }
    }
}

// ll binpow1(ll a, ll b)
// {
//     ll res = 1;
//     while (b > 0)
//     {
//         if (b & 1)
//             res = res * a;
//         a = a * a;
//         b = b >> 1;
//     }
//     return res;
// }
// ll mod=1000000000+7;
ll binpow3(ll a, ll b)
{
    ll res = 1;
    a = a % mod;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b = b >> 1;
    }
    return res;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    int r = k;
    string s;
    cin >> s;

    string st2 = s;

    bool flag = true;
    for (char i = 'a'; i <= 'z'; i++)
    {
        string st = "";
        for (int j = 0; j < st2.size(); j++)
        {
            if (st2[j] == i && k > 0)
            {
                k--;
            }
            else
            {
                st.push_back(st2[j]);
            }
        }
        st2 = st;
        if (k == 0)
        {
            break;
        }
    }
    cout << st2;
}

int main()
{
    //  #ifndef ONLINE_JUDGE
    // fropen("input.txt","r",stdin);
    // fropen("output.txt","w",stdout);
    // #endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    gdb[1] = 0;
    ll t = 1;
    // sieve();
    // cin >> t;
    while (t--)
    {
        solve();
    }
}