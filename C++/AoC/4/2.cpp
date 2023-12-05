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
    // vi a(n);
    // for (int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }
    ifstream input;
    input.open ("input.txt");
    string word;
    bool flag = false;
    bool flag2 = false;
    vi a;
    vi b;
    int c = 0;
    ll sum = 0;
    int id = 1;
    vi cnt (213, 1);

    if (input.is_open())
    {
        while ( getline (input, word, ' ') )
        {
            while (word == "")
            {
                getline (input, word, ' ');
            }

            if (word == "Card")
            {
                getline (input, word, ' ');
            }

            while (word == "")
            {
                getline (input, word, ' ');
            }

            if (word[word.size() - 1] == ':')
            {
                getline (input, word, ' ');
                flag = false;
            }

            while (word == "")
            {
                getline (input, word, ' ');
            }

            if (word[word.size() - 1] == '|')
            {
                getline (input, word, ' ');
                flag = true;
            }

            while (word == "")
            {
                getline (input, word, ' ');
            }

            if (word.find ("\n") != string::npos)
            {
                // word=word.substr(word.find("\n"),word.size()-word.find("\n"));
                word = word.substr (0, word.find ("\n"));
                flag2 = true;
            }

            if (flag)
            {
                b.pb (stoi (word));
            }
            else
            {
                a.pb (stoi (word));
            }

            if (flag2)
            {
                for (int i = 0; i < a.size(); i++)
                {
                    for (int j = 0; j < b.size(); j++)
                    {
                        if (a[i] == b[j])
                        {
                            c++;
                        }
                    }
                }

                for (int i = id; i < c + id && i < cnt.size(); i++)
                {
                    cnt[i] += cnt[id - 1];
                }

                // sum += ll (pow (2, c - 1));
                a.clear();
                b.clear();
                flag2 = false;
                c = 0;
                id++;
            }
        }

        input.close();
    }

    for (int i = 0; i < cnt.size(); i++)
    {
        sum += cnt[i];
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
