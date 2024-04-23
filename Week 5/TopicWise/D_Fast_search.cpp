#include <bits/stdc++.h>
#define ll long long
using namespace std;

int firstOccurance(int key, const vector<int> &a)
{
    int l = 0, r = a.size() - 1, mid, idx = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (key <= a[mid])
        {
            idx = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return idx;
}

int secondOccurance(int key, const vector<int> &a)
{
    int l = 0, r = a.size() - 1, mid, idx = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (key >= a[mid])
        {
            idx = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    return idx;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int l_index = firstOccurance(l, a);
        int r_index = secondOccurance(r, a);

        int ans = r_index - l_index;
        cout << ans + 1 << " ";
    }
    return 0;
}