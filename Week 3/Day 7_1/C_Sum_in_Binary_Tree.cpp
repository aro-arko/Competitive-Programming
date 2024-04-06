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
        ll n;
        cin >> n;
        ll ans = 0;
        while (n != 0)
        {
            ans += n;
            n = n / 2LL;
        }
        cout << ans << '\n';
    }
    return 0;
}