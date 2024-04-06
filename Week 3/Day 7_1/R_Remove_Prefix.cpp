#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (mp[a[i]] == 0)
            {
                cnt++;
                mp[a[i]]++;
            }
            else
                break;
        }

        cout << n - cnt << endl;
    }

    return 0;
}