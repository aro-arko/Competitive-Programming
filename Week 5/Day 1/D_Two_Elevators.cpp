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
        int a, b, c;
        cin >> a >> b >> c;
        int ans = abs(a - 1);
        int ans1 = abs(b - c) + (c - 1);
        if (ans == ans1)
        {
            cout << 3 << endl;
        }
        else if (ans < ans1)

        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}