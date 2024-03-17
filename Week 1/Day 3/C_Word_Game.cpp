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
        int n;
        cin >> n;
        string arr[3][n];
        map<string, int> fq;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                fq[arr[i][j]]++;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            int points = 0;
            for (int j = 0; j < n; j++)
            {
                if (fq[arr[i][j]] == 1)
                {
                    points += 3;
                }
                else if (fq[arr[i][j]] == 2)
                {
                    points += 1;
                }
            }
            cout << points << " ";
        }
        cout << '\n';
    }
    return 0;
}
