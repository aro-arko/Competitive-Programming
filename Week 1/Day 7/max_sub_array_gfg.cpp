// Link: https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
// code:

/*
class Solution{
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here
        int l = 0, r = 0;
        long long ans = 0, sum = 0;

        while(r < N){
            if((r - l + 1) == K){
                sum += Arr[r];
                ans = max(ans, sum);
                sum -= Arr[l];
                l++;
                r++;
            }
            else{
                sum+=Arr[r];
                r++;
            }
        }
        return ans;
    }
};

*/