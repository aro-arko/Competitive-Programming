#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define mod 1000000007
ll solve(ll base, ll n)
{
    ll result = 1;
    while (n)
    {
        if (n % 2 == 1)
        {
            result = (result * base) % mod;
            n--;
        }
        else
        {
            base = (base * base) % mod;
            n /= 2;
        }
    }
    return result % mod;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string v;
        while (k)
        {
            if (k % 2 == 0)
                v += '0';
            else
                v += '1';
            k /= 2;
        }
        ll ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == '1')
                ans += solve(n, i);
            ans %= mod;
        }
        cout << ans << endl;
    }
    return 0;
}