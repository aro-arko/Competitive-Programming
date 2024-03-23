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

        for (int i = 0; i < n; i++)
        {
            int times;
            string s;
            cin >> times >> s;
            for (int j = 0; j < times; j++)
            {
                if (s[j] == 'D')
                {
                    a[i] += 1;
                    if (a[i] == 10)
                    {
                        a[i] = 0;
                    }
                }
                else if (s[j] == 'U')
                {
                    a[i] -= 1;
                    if (a[i] == -1)
                    {
                        a[i] = 9;
                    }
                }
            }
        }

        for (int val : a)
        {
            cout << val << " ";
        }
        cout << '\n';
    }

    return 0;
}