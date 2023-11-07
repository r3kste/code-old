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

int main()
{
    fastio;

    int t = 1;
    if (true)
        cin >> t;

    while (t--)
    {
        solve();
        cout << "\n";
    }
}

int solve()
{
    fastio;

    int x, y, n;
    cin >> x >> y >> n;

    vi b;

    int k = 0;
    for (int i = y; i > x - 1; i -= k)
    {
        b.push_back(i);
        if (b.size() > n)
        {
            break;
        }
        k++;
    }
    int l = b.size();
    if (l < n)
    {
        cout << -1;
    }
    else
    {
        cout << x << " ";
        for (int i = 1; i < n - 1; i++)
        {
            int t = n - i - 1;
            cout << b[t] << " ";
        }
        cout << y;
    }

    return 0;
}