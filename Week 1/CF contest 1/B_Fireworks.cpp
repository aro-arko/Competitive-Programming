#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, m;
        cin >> a >> b >> m;

        ll ans = 2 + (m / a) + (m / b);
        cout << ans << endl;
    }

    return 0;
}
