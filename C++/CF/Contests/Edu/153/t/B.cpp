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

    int n, k;
    cin >> n >> k;
    vector<char> s1;
    vector<char> s2;
    vector<char> s;

    int c1 = 0, c2 = 0;
    to(i, 0, n, i + 1)
    {
        char temp;
        cin >> temp;
        if (i % 2 == 0)
        {
            s1.push_back(temp);
            c1++;
        }
        else
        {
            s2.push_back(temp);
            c2++;
        }
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    c1 = 0;
    c2 = 0;
    if (k % 2 == 1)
    {
        to(i, 0, n, i + 1)
        {
            if (i % 2 == 0)
            {
                cout << s1[c1++];
            }
            else
            {
                cout << s2[c2++];
            }
        }
    }

    else
    {
        c1 = 0;
        c2 = 0;
        to(i, 0, n, i + 1)
        {
            if (i % 2 == 0)
                s.push_back(s1[c1++]);
            else
                s.push_back(s2[c2++]);
        }
        for (int i = 0; i <= n - k; i++)
        {
            if (s[i] > s[i + 1])
            {
                for (int j = 0; j < k / 2; j++)
                {
                    swap(s[i + 2 * j], s[i + 2 * j + 1]);
                }
            }
        }
        for (int i = 0; i <= n - k; i++)
        {
            if (s[i] > s[i + 1])
            {
                for (int j = 0; j < k / 2; j++)
                {
                    swap(s[i + 2 * j], s[i + 2 * j + 1]);
                }
            }
        }
        for (int i = 0; i <= n - k; i++)
        {
            if (s[i] > s[i + 1])
            {
                for (int j = 0; j < k / 2; j++)
                {
                    swap(s[i + 2 * j], s[i + 2 * j + 1]);
                }
            }
        }

        to(i, 0, n, i + 1)
        {
            cout << s[i];
        }
    }

    return 0;
}