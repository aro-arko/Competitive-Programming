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
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll sum = 0, op = 0;
        bool isNegative = false;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += abs(a[i]);
        }

        for (ll i = 0; i <= n; i++)
        {
            if (isNegative)
            {
                if (i == n || a[i] > 0)
                {
                    op++;
                    isNegative = false;
                }
            }
            else
            {
                if (a[i] < 0)
                {
                    isNegative = true;
                }
            }
        }
        cout << sum << " " << op << '\n';
    }
    return 0;
}