// Problem: Maximum Product Pair With Target Sum
// Link to the problem: https://leetcode.com/problems/maximum-product-pair-with-target-sum/
class Solution
{
public:
    vector<int> maxProductPair(vector<int> &nums, int target)
    {
        const int n = nums.size();
        int mx = -100001;
        vector<int> ans = {-1, -1};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j && nums[i] + nums[j] == target && nums[i] > nums[j])
                {
                    const int x = nums[i] * nums[j];
                    if (x > mx)
                    {
                        mx = x;
                        ans[0] = i;
                        ans[1] = j;
                    }
                }
            }
        }
        return ans;
    }
};