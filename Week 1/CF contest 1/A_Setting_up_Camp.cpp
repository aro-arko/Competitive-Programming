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

        int tents = a;

        while (b % 3 != 0 && c >= 1)
        {
            b++;
            c--;
        }

        tents += b / 3;

        // cout << b << " " << c;

        int remaining_extroverts = b % 3;
        int remaining_universals = c;

        if (remaining_extroverts == 0 && remaining_universals == 0)
        {
            cout << tents << '\n';
        }

        else
        {
            if (remaining_extroverts * 2 <= remaining_universals)
            {
                tents += remaining_extroverts;
                remaining_universals -= remaining_extroverts * 2;
            }
            else
            {
                cout << "-1\n";
                continue;
            }

            tents += (remaining_universals + 2) / 3;

            cout << tents << '\n';
        }
    }
    return 0;
}
