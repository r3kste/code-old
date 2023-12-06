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
    ifstream input;
    string file = "input.txt";
    input.open (file);
    string line;
    ll mapfro;
    ll mapto;
    getline (input, line);
    stringstream words (line);
    string tempo1, tempo2;
    ll min = MOD * MOD;
    vector < pair < ll, ll>> range;
    map<ll, vector<vll>> p;

    while (getline (words, tempo1, ' '))
    {
        if (isdigit (tempo1[0]))
        {
            getline (words, tempo2, ' ');
            ll t1 = stoll (tempo1);
            ll t2 = stoll (tempo2);
            range.pb (mp (t1, t2 + t1));
        }
    }

    if (input.is_open())
    {
        while ( getline (input, line) )
        {
            if (line == "")
            {
                continue;
            }
            else
            {
                if (line == "seed-to-soil map:")
                {
                    mapto = 1;
                }
                else if (line == "soil-to-fertilizer map:")
                {
                    mapto = 2;
                }
                else if (line == "fertilizer-to-water map:")
                {
                    mapto = 3;
                }
                else if (line == "water-to-light map:")
                {
                    mapto = 4;
                }
                else if (line == "light-to-temperature map:")
                {
                    mapto = 5;
                }
                else if (line == "temperature-to-humidity map:")
                {
                    mapto = 6;
                }
                else if (line == "humidity-to-location map:")
                {
                    mapto = 7;
                }
                else
                {
                    stringstream indices (line);
                    string temp;
                    vll tindex;

                    while (getline (indices, temp, ' '))
                    {
                        if (isdigit (temp[0]))
                        {
                            tindex.pb (stoll (temp));
                        }
                    }

                    if (tindex.size() == 3)
                    {
                        p[mapto - 1].pb ({tindex[0], tindex[1], tindex[2]});
                    }
                }
            }
        }

        input.close();
    }

    for (int i = 0; i < range.size(); i++) //ranges
    {
        for (int j = range[i].F; j <= range[i].S + 1&&j>=range[i].F; j += 1000) //range limits
        {
            mapfro = j;
            mapto = j;

            for (int k = 0; k < 7; k++) //select operation
            {
                mapfro = mapto;
                mapto = mapfro;

                for (int l = 0; l < p[k].size(); l++) // range of operation
                {
                    if (mapfro >= p[k][l][1] && mapfro <= (p[k][l][2] + p[k][l][1] - 1))
                    {
                        mapto = mapfro - p[k][l][1] + p[k][l][0];
                        l = p[k].size();
                    }
                }
            }

            if (mapto < min)
            {
                min = mapto;
            }
        }
    }

    cout << min;
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
