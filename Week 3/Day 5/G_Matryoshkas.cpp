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
        int arr[n];
        vector<int> v;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (mp[arr[i]] == 0)
            {
                v.push_back(arr[i]);
            }
            mp[arr[i]]++;
        }

        sort(v.begin(), v.end());

        int cnt = 0;
        for (int i = 0; i < v.size(); i++)
        {
            while (mp[v[i]] > 0)
            {
                cnt++;
                mp[v[i]]--;

                int x = v[i];
                while (mp[++x] > 0)
                {
                    mp[x]--;
                }
            }
        }

        cout << cnt << "\n";
    }
    return 0;
}