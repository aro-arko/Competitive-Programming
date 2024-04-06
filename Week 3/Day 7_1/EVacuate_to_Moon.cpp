#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        ll n, m, h;
        cin >> n >> m >> h;

        vector<ll> car(n);
        vector<ll> car2(m);

        for (int i = 0; i < n; i++)
            cin >> car[i];
        for (int i = 0; i < m; i++)
            cin >> car2[i];

        sort(car.rbegin(), car.rend());
        sort(car2.rbegin(), car2.rend());

        ll ans = 0;

        for (int i = 0, j = 0; i < n and j < m; i++, j++)
        {
            ans += min({car[i], h * car2[j]});
        }

        cout << ans << endl;
    }
    return 0;
}