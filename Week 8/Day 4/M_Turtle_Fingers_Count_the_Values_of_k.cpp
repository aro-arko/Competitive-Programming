#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll a, b, l;
    cin >> a >> b >> l;
    ll ans = 0;
    ll x = 0;
    if (a == b)
    {
        ll y = 1;
        while (l % b == 0)
        {
            l /= b;
            y++;
        }
        cout << y << "\n";
        return;
    }
    set<int> k;
    while (true)
    {
        if (int(pow(a, x)) > l)
            break;
        if ((l % int(pow(a, x))) != 0)
            break;
        ll curr = l / int(pow(a, x));
        k.insert(curr);
        while (curr % b == 0)
        {
            curr /= b;
            k.insert(curr);
        }
        x++;
    }
    cout << k.size() << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}