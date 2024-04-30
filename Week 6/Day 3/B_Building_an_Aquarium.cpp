#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, present_watr, l = 1;
        ll r = 0;
        cin >> n >> present_watr;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        r = 2e9;
        ll res = 0;
        while (l <= r)
        {

            ll total_water = 0;
            ll mid_height = (l + r) / 2;
            for (ll i = 0; i < n; i++)
            {
                if (a[i] < mid_height)
                {
                    total_water += (mid_height - a[i]);
                }
            }
            if (total_water <= present_watr)
            {
                res = mid_height;
                l = mid_height + 1;
            }
            else
            {
                r = mid_height - 1;
            }
        }

        cout << res << endl;
    }
    return 0;
}