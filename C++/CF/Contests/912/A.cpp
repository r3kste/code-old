#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a (n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (is_sorted (begin (a), end (a)))
        {
            cout << "YES";
        }
        else
        {
            if (k == 1)
            {
                cout << "NO";
            }
            else
            {
                cout << "YES";
            }
        }

        cout << "\n";
    }
}