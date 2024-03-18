#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<ll> arr(n);
    ll sum = 0, smallest_odd = LLONG_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        if (arr[i] % 2 != 0 && arr[i] < smallest_odd)
        {
            smallest_odd = arr[i];
        }
    }

    if (sum % 2 != 0)
    {
        sum -= smallest_odd;
    }

    cout << sum << '\n';

    return 0;
}

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// bool compare(int a, int b)
// {
//     return a > b;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;
//     vector<ll> arr(n);
//     ll sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         sum += arr[i];
//     }
//     sort(arr.begin(), arr.end(), compare);

//     // cout << sum << '\n';

//     if (sum % 2 == 0)
//     {
//         cout << sum << '\n';
//     }
//     else
//     {
//         int last_index = n - 1;
//         while (sum % 2 != 0)
//         {
//             sum -= arr[last_index];
//             last_index--;
//             if (last_index < 0)
//             {
//                 break;
//             }
//         }

//         cout << sum << '\n';
//     }
//     return 0;
// }