#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll m, ll n)
{
    if (m < n)
    {
        ll tmp;
        tmp = m;
        m = n;
        n = tmp;
    }
    ll r;
    while (n)
    {
        r = m % n;
        m = n;
        n = r;
    }
    return m;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, l = 1;
        cin >> a >> b;

        ll g = gcd(a, b);
        while (b != 1)
        {
            if (g == 1)
            {
                l = 0;
                break;
            }
            b = b / g;
            g = gcd(b, g);
            l = 1;
        }

        if (l == 1)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    return 0;
}