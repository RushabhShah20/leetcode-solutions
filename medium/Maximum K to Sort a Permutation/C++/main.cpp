// Problem: Maximum K to Sort a Permutation
// Link to the problem: https://leetcode.com/problems/maximum-k-to-sort-a-permutation/
class Solution
{
public:
    int sortPermutation(vector<int> &nums)
    {
        const int n = nums.size();
        int ans = ~0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != i)
            {
                ans &= nums[i];
            }
        }
        if (ans == ~0)
        {
            return 0;
        }
        else
        {
            return ans;
        }
    }
};