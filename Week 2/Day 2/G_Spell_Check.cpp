#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s = "Timur";
    sort(s.begin(), s.end());
    // cout << s;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s1;
        cin >> n >> s1;
        sort(s1.begin(), s1.end());
        // cout << s1 << endl;
        if (s == s1)
        {
            cout << "YES" << '\n';
        }
        else
            cout << "NO" << '\n';
    }
    return 0;
}