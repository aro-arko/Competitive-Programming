#include <bits/stdc++.h>
#define ll long long
using namespace std;

int read(int x = 0, int f = 0, char ch = getchar())
{
    while (ch < 48 or ch > 57)
        f = ch == 45, ch = getchar();
    while (48 <= ch and ch <= 57)
        x = x * 10 + ch - 48, ch = getchar();
    return f ? -x : x;
}

const int N = 2e5 + 5;

int n;
int a[N], b[31];

void solve()
{
    n = read(), memset(b, 0, sizeof b);
    for (int i = 1; i <= n; i++)
    {
        a[i] = read();
        for (int x = a[i], j = 0; x; x >>= 1, j++)
            if (x & 1)
                b[j]++;
    }
    for (int k = 1; k <= n; k++)
    {
        bool f = 1;
        for (int j = 0; j <= 30; j++)
            if (b[j] % k != 0)
            {
                f = 0;
                break;
            }
        if (f)
            cout << k << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = read();
    while (t--)
    {
        solve();
    }
    return 0;
}