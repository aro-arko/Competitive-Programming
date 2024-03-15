#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    int ans = b - a + 1;
    if (ans > 0)
    {
        cout << ans << '\n';
    }
    else
    {
        cout << "0" << '\n';
    }
    return 0;
}