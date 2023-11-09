#include <bits/stdc++.h>
using namespace std;

#define Matrix vector<vector<ll>>

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

Matrix mul (Matrix a, Matrix b)
{
    Matrix res (n, vector<ll> (n, 0) );

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                res[i][j] += a[i][k] * b[k][j];
                res[i][j] %= MOD;
            }
        }
    }

    return res;
}

Matrix expo_power (Matrix a, long long n)
{
    Matrix res (n, vector<ll> (n, 0) );

    for (ll i = 0; i < n; ++i)
    {
        res[i][i] = 1;
    }

    while (k)
    {
        if (k & 1)
        {
            res = mul (res, a);
        }

        k /= 2;
        a = mul (a, a);
    }

    return res;
}

int solve()
{
    fastio;
    int k;
    cin >> k;
    ll m;
    cin >> m;
    vi a (k);

    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }

    ll mat[k][k];
    vector<vector<ll>> e (k, vector<ll> (k, 0) );
    e[0][0] = 1;
    vector<vector<ll>> t (k, vector<ll> (k, 0) );

    for (int i = 0; i < k; i++)
    {
        t[i][0] = a[i];
    }

    Matrix rs (k, vector<ll> (k, 0) );
    rs = expo_power (t, m);
    rs = mul (rs, e);
    cout << rs [0][0];
    // vi a(n);
    // for (int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }
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
