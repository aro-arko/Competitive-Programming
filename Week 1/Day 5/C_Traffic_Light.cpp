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
        string s;
        char ch;
        cin >> n >> ch;
        cin >> s;

        s += s;

        // rggryrggry

        bool flag = false;
        int res = 0, cnt = 0;

        if (s[0] == 'g')
        {
            cout << 0 << endl;
            continue;
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'g')
            {
                res = max(res, cnt);
                flag = false;
            }

            if (s[i] == ch && !flag)
            {
                flag = true;
                cnt = 0;
            }

            if (flag)
            {
                cnt++;
            }
        }
        cout << res << endl;
    }

    return 0;
}