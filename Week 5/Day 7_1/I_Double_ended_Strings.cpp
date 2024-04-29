#include <bits/stdc++.h>
using namespace std;

int user(string s, string t)
{
    int dp[s.size() + 1][t.size() + 1];

    int res = 0;

    for (int i = 0; i <= s.size(); i++)
    {
        for (int j = 0; j <= t.size(); j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else
            {
                if (s[i - 1] == t[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
            res = max(res, dp[i][j]);
        }
    }

    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string a, b;
        cin >> a >> b;

        int ans = user(a, b);

        cout << a.size() + b.size() - (2 * ans) << endl;
    }

    return 0;
}