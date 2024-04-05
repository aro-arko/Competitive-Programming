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
        int n, k;
        cin >> n >> k;
        map<int, pair<int, int>> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (!mp.count(x))
            {
                mp[x].first = i;
                mp[x].second = i;
            }
            else
            {
                mp[x].second = i;
            }
        }

        while (k--)
        {
            int a, b;
            cin >> a >> b;
            bool ans = false;
            if (!mp.count(a) || !mp.count(b) || mp[a].first > mp[b].second)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES" << '\n';
            }
        }
    }
    return 0;
}