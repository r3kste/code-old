#include <bits/stdc++.h>
using namespace std;

#define MOD (LL)(1e9 + 7)
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

typedef long long int ll;
typedef unsigned long long int LL;
typedef pair<int, int> ii;

typedef vector<int> vi;
typedef vector<pair<int, int>> vii;
typedef vector<long long int> vll;
typedef vector<unsigned long long int> vLL;

int solve()
{
    fastio;

    ll n, k;
    cin >> n >> k;

    cout << ll(ceil(1.0 * k * (1.0 * n / (n - 1)))) - 1; // it'll be funny if this works
    // holy hell, it did

    // basically, we want the answer x such that
    // x = k + (x / n)
    // Its something like
    // Assume that the answer we want is k
    // To this k, add the number of numbers that have been skipped
    // This number of numbers that has been skipped would be equal to floor of (x/n), where x is the final answer
    // x = k * n / (n-1)

    // In case of n=3,k=7
    //  x = 7 * 3 / 2 = 21/2 = 10.5 = 10
    //  However when x comes out to be an integer, we need to subtract one (when k%n =0)
    //  We do this by ceil(x) - 1;

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
