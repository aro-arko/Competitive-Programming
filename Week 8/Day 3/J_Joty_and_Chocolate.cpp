#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b, p, q, n;
    ll na, nb, divi;
    ll lcm;

    cin >> n >> a >> b >> p >> q;

    na = n / a;
    nb = n / b;

    lcm = (a * b) / __gcd(a, b);
    divi = n / lcm;

    na -= divi;
    nb -= divi;

    ll res = (na * p) + (nb * q) + (max(p, q) * divi);

    cout << res;
    return 0;
}