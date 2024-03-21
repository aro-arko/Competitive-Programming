vector<long long> printFirstNegativeInteger(long long int A[],
                                            long long int N, long long int K)
{

    long long l = 0, r = 0;

    vector<long long> v;

    while (r < N)
    {

        if ((r - l + 1) == K)
        {
            for (int i = l; i <= r; i++)
            {
                if (A[i] < 0)
                {
                    v.push_back(A[i]);
                    break;
                }
                else if (i == r)
                {
                    v.push_back(0);
                }
            }
            r++;
            l++;
        }
        else
        {
            r++;
        }
    }

    return v;
}