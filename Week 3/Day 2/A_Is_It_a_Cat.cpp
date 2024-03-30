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
        cin >> n;
        string s;
        cin >> s;
        vector<char> sound;
        for (auto &x : s)
        {
            x = tolower(x);
            sound.push_back(x);
        }

        auto it = unique(sound.begin(), sound.end());
        sound.resize(distance(sound.begin(), it));

        string unique_sound;
        for (it = sound.begin(); it != sound.end(); it++)
        {
            unique_sound.push_back(*it);
        }

        // cout << unique_sound;

        bool ans = true;
        if (unique_sound.size() > 4)
        {
            ans = false;
        }
        else
        {
            if (unique_sound[0] != 'm')
            {
                ans = false;
            }
            if (unique_sound[1] != 'e')
            {
                ans = false;
            }
            if (unique_sound[2] != 'o')
            {
                ans = false;
            }
            if (unique_sound[3] != 'w')
            {
                ans = false;
            }
        }

        if (ans)
        {
            cout << "YES" << '\n';
        }
        else
            cout << "NO" << '\n';
    }
    return 0;
}