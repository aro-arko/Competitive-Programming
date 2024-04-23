#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while (k--)
    {
        int x;
        cin >> x;
        bool flag = false;
        int l = 0, r = n - 1, mid, idx = -1;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (x == a[mid])
            {
                flag = true;
                break;
            }
            else if (x < a[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (flag)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}