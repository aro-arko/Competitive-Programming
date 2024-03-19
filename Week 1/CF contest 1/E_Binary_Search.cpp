#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // Count the number of zeros and ones on the right side
        int zeros_right = count(s.begin(), s.end(), '0');
        int ones_right = n - zeros_right;

        int ans = -1;                 // Initialize answer to -1
        int min_difference = INT_MAX; // Initialize minimum difference to maximum possible value

        // Check if it's possible to lay the road before the first house
        if ((n / 2) + (n % 2) <= ones_right)
        {
            min_difference = n; // Update minimum difference
            ans = 0;            // Update answer
        }

        int zeros_left = 0, ones_left = 0; // Initialize counts for zeros and ones on the left side

        // Iterate through each house to find the optimal position to lay the road
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

            int total_zeros = zeros_left + zeros_right; // Total zeros on both sides
            int total_ones = ones_left + ones_right;    // Total ones on both sides

            // Check if the condition is satisfied on both sides
            if ((total_zeros / 2) + (total_zeros % 2) <= zeros_left &&
                (total_ones / 2) + (total_ones % 2) <= ones_right)
            {

                // Calculate the absolute difference between the number of zeros and ones on both sides
                int difference = abs(total_zeros - total_ones);

                // Update answer if the current position yields a smaller difference
                if (difference < min_difference)
                {
                    min_difference = difference;
                    ans = i + 1;
                }
            }
        }
        cout << ans << endl; // Output the optimal position to lay the road
    }
    return 0;
}
