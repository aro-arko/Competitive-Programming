#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int zeros_right = 0, ones_right = 0;
        for (char c : s)
        {
            if (c == '0')
                zeros_right++;
            else
                ones_right++;
        }

        int ans = -1;
        int min_difference = INT_MAX;
        if (ones_right >= (n / 2) + (n % 2))
        {
            min_difference = n;
            ans = 0;
        }

        int zeros_left = 0, ones_left = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                zeros_right--;
                zeros_left++;
            }
            else
            {
                ones_right--;
                ones_left++;
            }

            int total_zeros = zeros_left + zeros_right;
            int total_ones = ones_left + ones_right;

            if ((total_zeros / 2) + (total_zeros % 2) <= zeros_left &&
                (total_ones / 2) + (total_ones % 2) <= ones_right)
            {
                int difference = abs(total_zeros - total_ones);
                if (difference < min_difference)
                {
                    min_difference = difference;
                    ans = i + 1;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
