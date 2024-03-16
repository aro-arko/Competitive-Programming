#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    bool ans = false;
    for (int i = 0; i <= c; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            if (((i * a) + (j * b)) == c)
            {
                ans = true;
                break;
            }
        }
    }

    if (ans)
    {
        cout << "Yes" << '\n';
    }
    else
    {
        cout << "No" << '\n';
    }
    return 0;
}