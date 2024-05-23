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
        int n, m;
        cin >> n >> m;
        vector<int> a[n + 1];

        int value = 1;
        for (int i = 1; i <= n; i++)
        {
            a[i].resize(m + 1);
            for (int j = 1; j <= m; j++)
            {
                a[i][j] = value;
                value++;
            }
        }

        for (int i = 2; i <= n; i += 2)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        for (int i = 1; i <= n; i += 2)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}