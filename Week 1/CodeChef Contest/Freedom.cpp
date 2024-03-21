#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int ans = 0;
        map<int, int> m;
        for (int i = 0; i < n; ++i)
        {
            m[a[i]]++;
        }

        for (int i = 0; i < n; ++i)
        {
            if (a[i] <= 3)
            {
                m[a[i]]--;
                continue;
            }

            int num = a[i];
            int den = a[i] - 3;

            if (num % den != 0)
            {
                m[a[i]]--;
                continue;
            }

            int val = num / den;
            if (val == a[i])
            {
                if (m[val] - 1 > 0)
                {
                    ans += m[val] - 1;
                }
            }
            else
            {
                if (m[val] > 0)
                {
                    ans += m[val];
                }
            }
            m[a[i]]--;
        }
        cout << ans << endl;
    }
    return 0;
}
