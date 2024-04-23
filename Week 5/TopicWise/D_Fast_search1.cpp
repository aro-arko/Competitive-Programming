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

    sort(a.begin(), a.end());

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        auto it1 = lower_bound(a.begin(), a.end(), l);
        auto it2 = upper_bound(a.begin(), a.end(), r);
        cout << it2 - it1 << " ";
    }
    return 0;
}