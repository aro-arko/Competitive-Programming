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
        int n;
        cin >> n;
        string first, second;
        cin >> first;
        cin >> second;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (first[i] != second[i] && ((first[i] == 'R') || (second[i] == 'R')))
            {
                flag = false;
            }
        }

        if (flag)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}