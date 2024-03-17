#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll boxes;
        cin >> boxes;
        vector<ll> choco_boxes(boxes);
        for (ll i = 0; i < boxes; i++)
        {
            cin >> choco_boxes[i];
        }
        sort(choco_boxes.begin(), choco_boxes.end());

        ll extra_choco = 0;

        for (ll i = 0; i < boxes; i++)
        {
            extra_choco += choco_boxes[i] - choco_boxes[0];
        }
        cout << extra_choco << '\n';
    }
    return 0;
}