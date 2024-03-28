#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, s;
    cin >> n >> s;
    ll a[n];
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    ll sum = 0, l = 1, ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        sum += a[i];
        while (sum - a[l] >= s)
        {
            sum -= a[l];
            l++;
        }
        if (sum >= s)
        {
            ans += l;
        }
    }

    cout << ans << '\n';
    return 0;
}