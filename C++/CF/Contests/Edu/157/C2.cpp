#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> tickets (n);
    unordered_map<int, int> ticket_sums;
    long long lucky_pairs = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> tickets[i];
        int sum = 0;

        for (char digit : tickets[i])
        {
            sum += digit - '0';
        }

        ticket_sums[sum]++;
    }

    for (int i = 0; i < n; ++i)
    {
        int len = tickets[i].size();
        int half_sum = 0;

        for (int j = 0; j < len / 2; ++j)
        {
            half_sum += tickets[i][j] - '0';
        }

        if (len % 2 == 0)
        {
            int other_half_sum = 0;

            for (int j = len / 2; j < len; ++j)
            {
                other_half_sum += tickets[i][j] - '0';
            }

            lucky_pairs += ticket_sums[half_sum] - 1;
            lucky_pairs += ticket_sums[other_half_sum] - 1;
        }
        else
        {
            lucky_pairs += ticket_sums[half_sum] - 1;
        }
    }

    cout << lucky_pairs / 2 << endl;
    return 0;
}
