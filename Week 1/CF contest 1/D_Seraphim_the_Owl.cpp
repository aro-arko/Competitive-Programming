#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while (t--)
    {
        long long n, m;
        cin >> n >> m;

        long long bribeCost[n], intermediateBribeCost[n];

        for (long long i = 0; i < n; i++)
        {
            cin >> bribeCost[i];
        }

        for (long long i = 0; i < n; i++)
        {
            cin >> intermediateBribeCost[i];
        }

        long long totalCoinsSpent = 0;
        long long minCoinsSpent = LLONG_MAX;

        for (long long i = n - 1; i >= 0; i--)
        {
            if (i + 1 <= m)
            {
                minCoinsSpent = min(minCoinsSpent, totalCoinsSpent + bribeCost[i]);
            }
            totalCoinsSpent += min(bribeCost[i], intermediateBribeCost[i]);
        }

        cout << minCoinsSpent << '\n';
    }

    return 0;
}