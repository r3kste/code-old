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

    string n;
    cin >> n;

    int len = n.length();
    to(i, 0, len - 1, i + 1)
    {
        if (n[i] == n[i + 1])
        {
            cout << alt(len*2);
        }   
    }

    return 0;
}