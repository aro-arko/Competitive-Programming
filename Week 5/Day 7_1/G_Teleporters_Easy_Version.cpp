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
        int n;
        ll m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] += (i + 1);
        }
        sort(a.begin(), a.end());
        int ans = 0;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (sum + a[i] > m)
                break;
            sum += a[i];
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}