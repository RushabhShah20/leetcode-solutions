// Problem: Maximum XOR for Each Query
// Link to the problem: https://leetcode.com/problems/maximum-xor-for-each-query/
class Solution
{
public:
    vector<int> getMaximumXor(vector<int> &nums, int maximumBit)
    {
        int n = nums.size();
        vector<int> ans(n);
        ans[n - 1] = (nums[0] ^ ((int)(pow(2, maximumBit)) - 1));
        for (int i = n - 2; i >= 0; i--)
        {
            ans[i] = ans[i + 1] ^ nums[n - i - 1];
        }
        return ans;
    }
};