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
        int coins;
        cin >> coins;
        if (coins < a[0])
        {
            cout << 0 << '\n';
            continue;
        }

        auto it = upper_bound(a.begin(), a.end(), coins);
        int idx = it - a.begin();
        cout << idx << '\n';
    }
    return 0;
}