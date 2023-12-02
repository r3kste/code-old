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
    // int n;
    // cin >> n;
    // vi a(n);
    // for (int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }
    //
    ifstream input;
    input.open ("input.txt");
    string line;
    int id = 1;
    ll sum = 0;
    string temp1, temp2;

    if (input.is_open())
    {
        getline (input, temp1, ' ');

        while ( getline (input, temp2, ' ') )
        {
            temp2 = temp2.substr (0, temp2.length() - 1);
            id = stoi (temp2);
            map<char, int> e;
            e['r'] = 0;
            e['g'] = 0;
            e['b'] = 0;

            while (true)
            {
                getline (input, temp1, ' ');
                getline (input, temp2, ' ');
                e[temp2[0]] = max (e[temp2[0]], stoi (temp1));

                if (temp2.find ("Game") != string::npos)
                {
                    break;
                }
            }

            sum += (e['r'] * e['g'] * e['b']);
        }

        input.close();
    }

    cout << sum;
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