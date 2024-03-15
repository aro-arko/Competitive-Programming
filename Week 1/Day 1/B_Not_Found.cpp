#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);

    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());

    bool ans = false;
    char ch = 'a';

    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] + 1 == s[i + 1])
        {
            continue;
        }
        else
        {
            ans = true;
            ch = s[i] + 1;
            break;
        }
    }
    // cout << ch << endl;

    if (ans)
    {
        cout << ch << '\n';
    }
    else
    {
        cout << "None" << '\n';
    }

    // cout << s << endl;
    return 0;
}