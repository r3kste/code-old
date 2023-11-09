#include <bits/stdc++.h>
using namespace std;

#define nmod(m) n % m == 0

#define to(i, a, b, c) for (int(i) = (a); (i) < (b); (i) = (c))
#define fro(i, a, b, c) for (int(i) = (b)-1; (i) >= (a); (i) = (c))

#define MOD (LL)(1e9 + 7)
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

typedef long long int ll;
typedef unsigned long long int LL;
typedef pair<int, int> ii;

typedef vector<int> vi;
typedef vector<long long int> vll;
typedef vector<unsigned long long int> vLL;

int solve();

LL power (LL x, int y, ll mod)
{
    LL o = 1;
    x = x % mod;

    while (y > 0)
    {
        if (y & 1)
        {
            o = (o * x) % mod;
        }

        y = y >> 1; // y = y/2
        x = (x * x) % mod;
    }

    return o;
}
LL inv_m (LL n, ll mod)
{
    return power (n, mod - 2, mod);
}
LL mul (LL x, LL y, ll mod)
{
    return x * 1ull * y % mod;
}
LL divide_m (LL x, LL y, ll mod)
{
    return mul (x, inv_m (y, mod), mod);
}
LL ncr_m (LL n, int r, ll mod)
{
    if (n < r)
    {
        return 0;
    }

    if (r == 0)
    {
        return 1;
    }

    if (n - r < r)
    {
        return ncr_m (n, n - r, mod);
    }

    LL o = 1;
    fro (i, 1, r + 1, i - 1)
    o = divide_m (mul (o, n - i + 1, mod), i, mod);
    return o;
}

int main()
{
    fastio;
    int t = 1;

    if (true)
    {
        cin >> t;
    }

    while (t--)
    {
        solve();
        cout << "\n";
    }
}

int solve()
{
    fastio;
    int n;
    cin >> n;
    // vi a(n);
    to (i, 0, n, i + 1)
    {
        // cin >> a[i];
    }
    return 0;
}