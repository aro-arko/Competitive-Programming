#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            /* code */
            int x;
            cin >> x;
            ans |= x;
        }

        cout << ans << endl;
    }

    return 0;
}