#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k, s;
    cin >> k >> s;

    int ans = 0;

    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            int z = s - (i + j);

            if (z >= 0 && z <= k)
            {
                ans++;
            }
        }
    }

    cout << ans << '\n';
    return 0;
}