// Problem: Semi-Ordered Permutation
// Link to the problem: https://leetcode.com/problems/semi-ordered-permutation/
class Solution
{
public:
    int semiOrderedPermutation(vector<int> &nums)
    {
        int l = 0, r = 0, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1)
            {
                l = i;
            }
            else if (nums[i] == n)
            {
                r = i;
            }
        }
        int ans = 0;
        if (l < r)
        {
            ans = l + n - r - 1;
        }
        else
        {
            ans = l + n - r - 2;
        }
        return ans;
    }
};