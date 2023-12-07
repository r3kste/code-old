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
//gfg code
void bubbleSort (vector<pair<int, pair<string, int>>> p, int start, int end)
{
    int i, j;
    int n = p.size();

    for (i = start; i < end - 1; i++)
    {
        // Last i elements are already
        // in place
        for (j = start; j < end - i - 1 + start; j++)
        {
            if (p[j].S.F.compare (p[j + 1].S.F) > 0)
            {
                swap (p[j], p[j + 1]);
            }
        }
    }
}
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
    input.open ("input.txt");
    string line;
    vector<pair<int, pair<string, int>>> p;

    if (input.is_open())
    {
        while ( getline (input, line) )
        {
            stringstream words (line);
            string temp;
            getline (words, temp, ' ');
            string temp1 = "";

            for (int i = 0; i < 5; i++)
            {
                char ch = temp[i];

                switch (ch)
                {
                case 'A':
                    temp1 += "Z";
                    break;

                case 'K':
                    temp1 += "Y";
                    break;

                case 'Q':
                    temp1 += "X";
                    break;

                case 'J':
                    temp1 += "1";
                    break;

                case 'T':
                    temp1 += "R";
                    break;

                default:
                    temp1 += (ch);
                    break;
                }
            }

            string temp2;
            getline (words, temp2, ' ');
            p.pb (mp (0, mp (temp1, stoi (temp2))));
        }

        input.close();
    }

    int n = p.size();

    for (int i = 0; i < n; i++)
    {
        string hand = p[i].S.F;
        map<char, int> freq;

        for (int j = 0; j < 5; j++)
        {
            char ch = hand[j];
            freq[ch]++;
        }

        // int wow = freq[1];
        vi ff;

        for (auto i : freq)
        {
            if (i.F == '1')
            {
                continue;
            }

            ff.pb (i.S);
        }

        sort (all (ff));
        int wow = freq['1'];

        if (ff.size() != 0)
        {
            ff[ff.size() - 1] += wow;
        }
        else
        {
            ff = vi{5};
        }

        if (ff == vector<int> {5})
        {
            p[i].F = 7;
        }
        else if (ff == vi {1, 4})
        {
            p[i].F = 6;
        }
        else if (ff == vi{2, 3})
        {
            p[i].F = 5;
        }
        else if (ff == vi{1, 1, 3})
        {
            p[i].F = 4;
        }
        else if (ff == vi{1, 2, 2})
        {
            p[i].F = 3;
        }
        else if (ff == vi{1, 1, 1, 2})
        {
            p[i].F = 2;
        }
        else if (ff == vi{1, 1, 1, 1, 1})
        {
            p[i].F = 1;
        }
        else
        {
            p[i].F = 0;
        }
    }

    sort (all (p));
    int c = 1;
    int rank = 1;
    string score = "ZYXSR98765432";

    for (int i = 0; i < n - 1; i++)
    {
        if (p[i + 1].F != p[i].F)
        {
            int end = i + 1;
            int start = i + 1 - c;
            bubbleSort (p, start, end);
            c = 1;
        }
        else
        {
            c++;;
        }
    }

    ll sum = 0;

    for (int rank = 1, i = 0; i < n; i++, rank++)
    {
        sum += (rank * p[i].S.S);
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