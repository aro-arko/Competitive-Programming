#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr1(n), arr2(m);
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < m; i++)
        cin >> arr2[i];

    vector<int> merged(n + m);

    int idx1 = 0, idx2 = 0, idxMerged = 0;

    while (idx1 < n && idx2 < m)
    {
        if (arr1[idx1] <= arr2[idx2])
            merged[idxMerged++] = arr1[idx1++];
        else
            merged[idxMerged++] = arr2[idx2++];
    }

    while (idx1 < n)
        merged[idxMerged++] = arr1[idx1++];

    while (idx2 < m)
        merged[idxMerged++] = arr2[idx2++];

    for (int i = 0; i < n + m; i++)
        cout << merged[i] << " ";
    cout << endl;

    return 0;
}
