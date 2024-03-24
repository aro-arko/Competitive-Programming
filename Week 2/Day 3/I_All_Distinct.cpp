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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        set<int> uniqueElements(a.begin(), a.end());
        int total_deleted = a.size() - uniqueElements.size();
        // int ans = total_deleted - (total_deleted % 2);
        // cout << ans << endl;
        // cout << total_deleted << endl;

        if (total_deleted % 2 != 0)
        {
            total_deleted += 1;
        }
        int ans = a.size() - total_deleted;
        cout << ans << endl;
    }
    return 0;
}