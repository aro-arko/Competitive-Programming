#include <bits/stdc++.h>
using namespace std;

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
        int rank = 0;
        if (x >= 1900)
        {
            rank = 1;
        }
        else if (x >= 1600 && x <= 1899)
        {
            rank = 2;
        }
        else if (x >= 1400 && x <= 1599)
        {
            rank = 3;
        }
        else
        {
            rank = 4;
        }
        cout << "Division " << rank << '\n';
    }
    return 0;
}