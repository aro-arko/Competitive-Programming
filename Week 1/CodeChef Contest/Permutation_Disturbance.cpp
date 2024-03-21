#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int test_cases;
    cin >> test_cases;

    while (test_cases--)
    {
        int permutation_size;
        cin >> permutation_size;

        vector<int> permutation(permutation_size);
        for (int i = 0; i < permutation_size; i++)
        {
            cin >> permutation[i];
        }

        int min_swaps = 0;
        for (int i = 0; i < permutation_size; i++)
        {
            if (permutation[i] == i + 1)
            {
                min_swaps++;
                swap(permutation[i], permutation[i + 1]);
                i++;
            }
        }

        cout << min_swaps << endl;
    }

    return 0;
}
