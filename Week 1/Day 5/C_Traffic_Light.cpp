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
        string s, s1;
        cin >> n >> s >> s1;

        s1 += s1;

        bool flag = false;

        int res = 0, cnt = 0;

        if (s[0] == 'g')
        {
            cout << 0 << endl;
            continue;
        }

        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == 'g')
            {
                res = max(res, cnt);
                flag = false;
            }

            if (s1[i] == s[0] and flag == false)
            {
                flag = true;
                cnt = 0;
            }

            if (flag)
                cnt++;
        }

        cout << res << endl;
    }
    return 0;
}