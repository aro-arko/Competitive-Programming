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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> pref_sum(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        pref_sum[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            pref_sum[i] = pref_sum[i - 1] + a[i];
        }

        // while (k--)
        // {
        //     int x;
        //     cin >> x;
        //     if (x > pref_sum[n - 1])
        //     {
        //         cout << -1 << '\n';
        //         continue;
        //     }

        //     int l = 0, r = n - 1, idx = -1, mid;
        //     while (l <= r)
        //     {
        //         mid = (l + r) / 2;
        //         if (x <= pref_sum[mid])
        //         {
        //             idx = mid;
        //             r = mid - 1;
        //         }
        //         else
        //         {
        //             l = mid + 1;
        //         }
        //     }
        //     cout << idx + 1 << '\n';
        // }

        while (k--)
        {
            int x;
            cin >> x;
            if (x > pref_sum[n - 1])
            {
                cout << -1 << '\n';
                continue;
            }
            auto it = lower_bound(pref_sum.begin(), pref_sum.end(), x);
            int idx = it - pref_sum.begin();
            cout << idx + 1 << '\n';
        }
    }
    return 0;
}