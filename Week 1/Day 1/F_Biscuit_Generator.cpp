#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, t;
    cin >> a >> b >> t;

    if (t >= a)
    {
        int steps = t / a;
        int biscuits = steps * b;
        cout << biscuits << '\n';
    }
    else
    {
        cout << "0" << '\n';
    }
    return 0;
}