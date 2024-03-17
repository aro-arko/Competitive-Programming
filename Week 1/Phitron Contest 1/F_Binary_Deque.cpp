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
        int n, target_sum;
        cin >> n >> target_sum;
        int total_sum = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            total_sum += arr[i];
        }
        if (total_sum == target_sum)
            cout << "0\n";
        else if (total_sum < target_sum)
            cout << "-1\n";
        else
        {
            // prothom theke
            int cnt = 0;
            int current_sum = 0;
            int start_index;
            for (int i = 0; i < n; i++)
            {
                current_sum += arr[i];
                cnt++;
                if (current_sum == target_sum)
                {
                    start_index = i + 1;
                    break;
                }
            }
            // prothom r por theke
            int max_length = cnt;
            int next_index = 0;
            for (int i = start_index; i < n; i++)
            {
                // prothom r por r index aganu
                int j = i;
                while (j < n)
                {
                    if (arr[j] == 1)
                        break;
                    cnt++;
                    max_length = max(max_length, cnt);
                    j++;
                }

                // ekhon r ta theke prothom ta baad
                i = j;
                current_sum++;
                while (next_index < n)
                {
                    if (arr[next_index] == 1)
                    {
                        next_index++;
                        break;
                    }
                    cnt--;
                    next_index++;
                    max_length = max(max_length, cnt);
                }
            }
            cout << n - max_length << '\n';
        }
    }
    return 0;
}
