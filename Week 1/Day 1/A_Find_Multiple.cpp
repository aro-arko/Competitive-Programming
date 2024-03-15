#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    int ab = b / c;
    // cout << ab << endl;
    int ans = ab * c;
    // cout << ans << '\n';

    if (ans >= a && ans <= b)
    {
        cout << ans << '\n';
    }
    else
    {
        cout << "-1" << '\n';
    }
    return 0;
}