#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int num;
        cin >> num;

        int first_three = num / 1000;
        int last_three = num % 1000;

        int sum1 = 0, sum2 = 0;

        while (first_three != 0)
        {
            sum1 += first_three % 10;
            first_three /= 10;
        }

        while (last_three != 0)
        {
            sum2 += last_three % 10;
            last_three /= 10;
        }

        if (sum1 == sum2)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
