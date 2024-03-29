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
        string s;
        cin >> s;
        map<char, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[s[i]]++;
        }

        int cnt = 0;
        for (auto it : freq)
        {
            if (it.second % 2 != 0)
            {
                cnt++;
            }
        }

        cnt = cnt - 1;
        if (cnt <= 0)
        {
            cnt = 0;
        }

        if (k >= cnt && k <= n)
        {
            cout << "YES" << '\n';
        }
        else
            cout << "NO" << '\n';
    }
    return 0;
}