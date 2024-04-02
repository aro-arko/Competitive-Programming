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
        string s;
        cin >> s;
        ll total = 0;
        vector<ll> ch;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                total += i;
                ll dif = (n - 1 - i) - i;
                ch.push_back(dif);
            }
            else
            {
                total += n - 1 - i;
                ll dif = i - (n - 1 - i);
                ch.push_back(dif);
            }
        }

        sort(ch.begin(), ch.end(), greater<ll>());

        for (ll i = 0; i < n; i++)
        {
            if (ch[i] > 0)
            {
                total += ch[i];
            }
            cout << total << " ";
        }
        cout << '\n';
    }

    return 0;
}