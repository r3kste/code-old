#include <bits/stdc++.h>
using namespace std;

#define MOD (LL)(1e9 + 7)
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define endl "\n"
#define yesno(a) cout << ((a) ? "Yes" : "No");

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

typedef long long int ll;
typedef unsigned long long int LL;
typedef pair<int, int> ii;

typedef vector<int> vi;
typedef vector<pair<int, int>> vii;
typedef vector<long long int> vll;

LL power (LL x, int y, ll mod) // Binary Exponentiation of x^y % mod
{
    LL o = 1;
    x = x % mod;

    while (y > 0)
    {
        if (y & 1) // Checks if LSB of y is 1.
        {
            o = (o * x) % mod;
        }

        y = y >> 1; // y = y/2
        x = (x * x) % mod;
    }

    return o;
}

int solve()
{
    fastio;
    int n;
    cin >> n;
    // vi a(n);
    // for (int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }
    // cout << power (2, n - 1, MOD);
    cout << ll (pow (2, n - 1)) % MOD;
    return 0;
}

int main()
{
    fastio;
    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
        cout << "\n";
    }
}
