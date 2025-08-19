// Problem: Find the N-th Value After K Seconds
// Link to the problem: https://leetcode.com/problems/find-the-n-th-value-after-k-seconds/
class Solution
{
public:
    int valueAfterKSeconds(int n, int k)
    {
        int mod = 1000000007;
        vector<int> nums(n, 1);
        vector<int> prefix(n);
        for (int j = 0; j < k; j++)
        {
            prefix[0] = 1;
            for (int i = 1; i < n; i++)
            {
                prefix[i] = (prefix[i - 1] + nums[i]) % mod;
            }
            nums = prefix;
        }
        return prefix[n - 1];
    }
};