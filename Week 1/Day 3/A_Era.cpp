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
        ll n;
        cin >> n;
        vector<int> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll operations = 0, x = 0;

        for (ll i = 0; i < n; i++)
        {

            if (arr[i] > (i + 1))
            {
                x = abs((i + 1) - arr[i]);
                operations = max(x, operations);
            }
        }
        cout << operations << endl;
    }
    return 0;
}
