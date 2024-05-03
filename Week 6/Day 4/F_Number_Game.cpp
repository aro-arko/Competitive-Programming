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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        auto ok = [&](int mid)
        {
            map<int, int> mp;
            int cnt = 0, m = 0, tmp = n, k = 0;
            for (int i = 0; i < n; i++)
                mp[a[i]]++;
            for (int i = 1; i <= mid; i++)
            {
                int res = mid - i + 1;
                if (cnt > 0 && mp[res] > 0)
                {
                    cnt = 0;
                    mp[a[k]]--;
                    if (mp[a[k]] == 0)
                        k++;
                }
                if (mp[res] > 0 && cnt == 0)
                {
                    m++;
                    mp[res]--;
                    tmp--;
                    if (tmp == 0)
                        break;
                    else
                        cnt++;
                }
                else
                {
                    int r = 0;
                    for (int j = n - 1; j >= 0; j--)
                    {
                        if (a[j] <= res && cnt > 0 && mp[a[j]] > 0)
                        {
                            cnt = 0;
                            mp[a[k]]--;
                            if (mp[a[k]] == 0)
                                k++;
                        }
                        else if (cnt == 0 && a[j] <= res && mp[a[j]] > 0)
                        {
                            r = a[j];
                            break;
                        }
                    }
                    if (r && mp[r] > 0)
                    {
                        m++;
                        mp[r]--;
                        tmp--;
                        if (tmp == 0)
                            break;
                        else
                            cnt++;
                    }
                    else
                        break;
                }
            }
            return m == mid;
        };
        int l = 1, r = 100, mid, ans = 0;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (ok(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << ans << endl;
    }
    return 0;
}