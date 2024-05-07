#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll brr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }
    sort(arr, arr + n);
    sort(brr, brr + n);
    for (int i = 0; i < n; i++)
    {
        ll d = brr[i] - arr[i];
        if (d == 1 || d == 0)
            continue;
        else
        {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
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