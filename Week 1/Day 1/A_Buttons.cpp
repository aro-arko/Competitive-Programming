#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int d_a = 0, d_b = 0, a_b = 0;
    int a, b;
    cin >> a >> b;

    // select a or b
    int ans = 0;
    ans = max(a, b);
    if (ans == a)
    {
        a -= 1;
    }
    else
    {
        b -= 1;
    }
    ans += max(a, b);
    cout << ans << '\n';
    return 0;
}