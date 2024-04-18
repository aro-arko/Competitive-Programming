#include <bits/stdc++.h>
#define ll long long
using namespace std;
pair<int, int> solve(int x)
{

    int bit = 0;

    while (1 << bit <= x)
    {
        bit++;
    }
    int mbs = 1 << (bit - 1);
    int a = mbs;
    int b = a ^ x;
    return {b, a};
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        pair<int, int> ans = solve(x);
        cout << ans.first << " " << ans.second << endl;
    }
    return 0;
}