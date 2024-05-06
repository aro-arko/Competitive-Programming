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
        string s;
        cin >> s;

        int one_count = 0, zero_count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one_count++;
            }
            else
            {
                zero_count++;
            }
        }

        int min_pairs = min(one_count, zero_count);
        if (min_pairs % 2 == 0)
        {
            cout << "Ramos" << '\n';
        }
        else
        {
            cout << "Zlatan" << '\n';
        }
    }
    return 0;
}