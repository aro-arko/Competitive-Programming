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
        vector<int> v(n);
        vector<ll> prefix(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i == 0)
            {
                prefix[i] = v[i];
            }
            else
            {
                prefix[i] = prefix[i - 1] + v[i];
            }
        }
        ll ans = 0;
        for (int i = 1; i < n; i++)
        {
            ans = max(ans, __gcd(prefix[i - 1], prefix[n - 1] - prefix[i - 1]));
        }
        cout << ans << endl;
    }
    return 0;
}