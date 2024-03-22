#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n >> x;
    vector<int> A;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (val == x)
        {
            continue;
        }
        else
        {
            A.push_back(val);
        }
    }

    for (int val : A)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}