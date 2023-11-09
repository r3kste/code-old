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

int solve()
{
    fastio;
    int money_zhenya, alone1, alone2;
    cin >> money_zhenya, alone1, alone2;
    int n;
    cin >> n;
    vii a (n);
    int rent = MOD;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].F;

        if (a[i].F < rent)
        {
            rent = a[i];
        }

        cin >> a[i].S;
    }

    rent = min (rent, money_zhenya);
    int m;
    cin >> m;
    vector<vector<int>> b (m, vector (2, 0));

    for (int i = 0; i < m; i++)
    {
        cin >> b[i][0];
        cin >> b[i][1];
        cin >> b[i][2];
    }

    return 0;
}

int main()
{
    fastio;
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
        cout << "\n";
    }
}
