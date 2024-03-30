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
        int n, q;
        cin >> n >> q;
        vector<ll> a(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<ll> pref(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] + a[i];
        }

        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;

            ll sum = pref[n];
            sum -= (pref[r] - pref[l - 1]);
            sum += ((r - l + 1) * k);
            if (sum % 2 != 0)
            {
                cout << "YES" << '\n';
            }
            else
                cout << "NO" << '\n';
        }
    }
    return 0;
}