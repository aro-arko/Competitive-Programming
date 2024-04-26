#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, l, r, t, ans;

    cin >> n >> l >> r >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ans = 0;
    for (int i = 0; i < (1 << n); i++)
    {

        int sum = 0, mx = INT_MIN, mn = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            if (((i >> j) & 1) == 1)
            {
                sum += a[j];
                mx = max(mx, a[j]);
                mn = min(mn, a[j]);
            }
        }
        if (sum >= l && sum <= r && (mx - mn) >= t)
        {

            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}