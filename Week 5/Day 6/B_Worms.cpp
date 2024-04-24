#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> pref_sum(n);
    pref_sum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pref_sum[i] = pref_sum[i - 1] + a[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        auto it = lower_bound(pref_sum.begin(), pref_sum.end(), x);
        int ans = (it - pref_sum.begin()) + 1;
        cout << ans << '\n';
    }

    return 0;
}