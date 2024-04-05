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
        vector<ll> a(n), b(n), c(n);

        vector<pair<ll, ll>> va, vb, vc;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            pair<ll, ll> my_pair = {a[i], i};
            va.push_back(my_pair);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            pair<ll, ll> my_pair = {b[i], i};
            vb.push_back(my_pair);
        }

        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            pair<ll, ll> my_pair = {c[i], i};
            vc.push_back(my_pair);
        }

        sort(va.begin(), va.end(), greater<>());
        sort(vb.begin(), vb.end(), greater<>());
        sort(vc.begin(), vc.end(), greater<>());

        ll ans = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if (va[i].second != vb[j].second && va[i].second != vc[k].second && vb[j].second != vc[k].second)
                    {
                        ans = max(va[i].first + vb[j].first + vc[k].first, ans);
                    }
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}