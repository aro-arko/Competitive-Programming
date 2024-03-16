#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int fq_array[26] = {0};
    for (char ch : s)
    {
        fq_array[ch - 'a']++;
    }
    char result = ' ';
    for (int i = 0; i < 26; i++)
    {
        if (fq_array[i] == 0)
        {
            result = 'a' + i;
            break;
        }
    }

    if (result != ' ')
    {
        cout << result << '\n';
    }
    else
    {
        cout << "None" << '\n';
    }
    return 0;
}