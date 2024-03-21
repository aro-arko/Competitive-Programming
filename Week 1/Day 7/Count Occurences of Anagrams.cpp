class Solution
{
public:
    int search(string pat, string txt)
    {
        // code here
        int k = pat.length();

        sort(pat.begin(), pat.end());

        long long cnt = 0;
        for (int i = 0; i <= txt.length() - k; i++)
        {
            string sub = txt.substr(i, k);
            sort(sub.begin(), sub.end());
            if (sub == pat)
            {
                cnt++;
            }
        }

        return cnt;
    }
};