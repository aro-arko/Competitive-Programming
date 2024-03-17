#include <bits/stdc++.h>
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
        unordered_map<int, int> freq;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        bool ans = false;
        for (pair<int, int> val : freq)
        {
            if (val.second >= 3)
            {
                cout << val.first << endl;
                ans = true;
                break;
            }
        }

        if (!ans)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}