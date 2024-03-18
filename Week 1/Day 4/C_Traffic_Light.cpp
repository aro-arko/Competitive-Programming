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
        int n;
        char curr;
        cin >> n >> curr;

        string light_sq;
        cin >> light_sq;

        int time = 0;
        int i = 0;
        while (light_sq[i] != 'g')
        {
            time += 1;
            i++;
        }

        size_t last_index = light_sq.find_last_of(curr);
        for (int i = (last_index - 1); i < n - 1; i++)
        {
            time++;
        }

        cout << time << endl;
    }
    return 0;
}