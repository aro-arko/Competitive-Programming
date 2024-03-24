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
        cin >> n;
        vector<int> a(n);
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        int max_freq = 0;
        for (auto it : freq)
        {
            max_freq = max(max_freq, it.second);
        }
        int ans = 0;
        while (max_freq < n)
        {
            int rem = n - max_freq;
            int can_add = max_freq;
            ans++;
            ans += min(can_add, rem);
            max_freq += min(can_add, rem);
        }

        cout << ans << '\n';
    }
    return 0;
}