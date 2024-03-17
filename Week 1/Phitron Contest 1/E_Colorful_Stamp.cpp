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
        string s;
        cin >> s;
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != 'W')
            {
                int color_B = 0, color_R = 0;
                while (i < n && s[i] != 'W')
                {
                    if (s[i] == 'B')
                        color_B++;
                    else if (s[i] == 'R')
                    {
                        color_R++;
                    }
                    i++;
                }
                if (color_B == 0 || color_R == 0)
                {
                    ans = false;
                    break;
                }
            }
        }
        if (ans)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}