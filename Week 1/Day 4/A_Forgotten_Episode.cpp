#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    int forgotten = 0;
    if (arr[0] != 1)
    {
        forgotten = 1;
    }
    else if (arr[n - 2] != n)
    {
        forgotten = n;
    }
    else
    {
        for (int i = 0; i < n - 2; i++)
        {
            if (arr[i] + 1 != arr[i + 1])
            {
                forgotten = arr[i] + 1;
                break;
            }
        }
    }

    cout << forgotten << '\n';
    return 0;
}
