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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll ans;
        auto kona_naima = [&](ll diff)
        {
            int cnt = 1;
            for (int l = 0, r = l + 1; r < n;)
            {
                if (a[l] + diff + diff >= a[r])
                {

                    r++;
                }
                else
                {

                    cnt++;
                    l = r;
                    r = l;
                }
            }
            return (cnt < 4);
        };
        ll low = 0, high = 2e9;
        while (low <= high)
        {
            ll mid = low + (high - low) / 2LL;
            if (kona_naima(mid))
            {
                ans = mid;
                high = mid - 1LL;
            }
            else
            {

                low = mid + 1LL;
            }
        }
        cout << ans << endl;
    }
    return 0;
}