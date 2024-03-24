#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    string s[1005];
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        int sum = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int ans = 0;
                for (int k = 0; k < m; k++)
                {
                    ans += abs(s[j][k] - s[i][k]);
                }
                sum = min(ans, sum);
            }
        }
        cout << sum << '\n';
    }
    return 0;
}