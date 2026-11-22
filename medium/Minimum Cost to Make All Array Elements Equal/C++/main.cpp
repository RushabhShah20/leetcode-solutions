// Problem: Minimum Cost to Make All Array Elements Equal
// Link to the problem: https://leetcode.com/problems/minimum-cost-to-make-all-array-elements-equal/
class Solution
{
public:
    long long minCost(vector<int> &nums)
    {
        const int n = nums.size();
        long long ans = LLONG_MAX, x = 1;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] == nums[i - 1])
            {
                x++;
            }
            else
            {
                if (i >= 2)
                {
                    ans = min(ans, (long long)(n - x) * (long long)(nums[i - 1]));
                }
                x = 1;
            }
        }
        if (x >= 2)
        {
            ans = min(ans, (long long)(n - x) * (long long)(nums[n - 1]));
        }
        return ans;
    }
};