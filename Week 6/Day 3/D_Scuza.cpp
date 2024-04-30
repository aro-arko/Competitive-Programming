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
        vector<ll> pref(n + 2, 0);
        for (int i = 1; i <= n; i++)
        {
            pref[i] = (a[i] + pref[i - 1]);
        }
        vector<ll> ans(q);
        vector<pair<ll, int>> k(q);
        for (int i = 0; i < q; i++)
        {
            cin >> k[i].first;
            k[i].second = i;
        }
        sort(k.begin(), k.end());
        int cnt = 0;
        for (int i = 0; i < q; i++)
        {
            while (true)
            {
                if (cnt == n or a[cnt + 1] > k[i].first)
                    break;
                cnt++;
            }
            ans[k[i].second] = pref[cnt];
        }

        for (int i = 0; i < q; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}