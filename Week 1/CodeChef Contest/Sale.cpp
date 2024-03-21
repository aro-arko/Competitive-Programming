#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> A[i];
        }

        int maxSum = 0;
        int sum = 0;

        for (int i = 0; i < n; ++i)
        {
            sum += A[i];
            maxSum = max(maxSum, sum + A[i]);
        }

        cout << maxSum << endl;
    }
    return 0;
}
