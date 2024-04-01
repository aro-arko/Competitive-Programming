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
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }

        int totalSum = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int temp_sum = 0;
                temp_sum += arr[i][j];

                // top left corner
                int temp_i = i - 1;
                int temp_j = j - 1;
                while (temp_i >= 0 && temp_j >= 0)
                {
                    temp_sum += arr[temp_i][temp_j];
                    temp_i--;
                    temp_j--;
                }

                // top right corner
                temp_i = i - 1;
                temp_j = j + 1;
                while (temp_i >= 0 && temp_j < m)
                {
                    temp_sum += arr[temp_i][temp_j];
                    temp_i--;
                    temp_j++;
                }

                // bottom left corner
                temp_i = i + 1;
                temp_j = j - 1;
                while (temp_i < n && temp_j >= 0)
                {
                    temp_sum += arr[temp_i][temp_j];
                    temp_i++;
                    temp_j--;
                }

                // bottom right corner
                temp_i = i + 1;
                temp_j = j + 1;
                while (temp_i < n && temp_j < m)
                {
                    temp_sum += arr[temp_i][temp_j];
                    temp_i++;
                    temp_j++;
                }

                totalSum = max(totalSum, temp_sum);
            }
        }

        cout << totalSum << '\n';
    }
    return 0;
}