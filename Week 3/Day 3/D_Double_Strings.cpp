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
        vector<string> v(n);
        map<string, bool> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]] = true;
        }

        for (int i = 0; i < n; i++)
        {
            bool flag = false;
            for (int j = 1; j < v[i].size(); j++)
            {
                string s1 = v[i].substr(0, j);
                string s2 = v[i].substr(j, v[i].size());

                if (mp[s1] && mp[s2])
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << '\n';
    }
    return 0;
}