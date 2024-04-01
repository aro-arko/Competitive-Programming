#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> pos[n + 1];

        int m = n;
        while (m--)
        {
            for (int i = 1; i <= n - 1; i++)
            {
                int x;
                cin >> x;
                pos[x].push_back(i);
            }
        }

        for (int i = 1; i <= n; i++)
        {
            sort(pos[i].begin(), pos[i].end());
        }

        int ans[n + 1];
        for (int i = 1; i <= n; i++)
        {
            if (pos[i][n - 2] == n - 1)
            {
                if (pos[i][0] == n - 1)
                {
                    ans[n] = i;
                }
                else
                {
                    ans[n - 1] = i;
                }
            }
            else
            {
                ans[pos[i][n - 2]] = i;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}