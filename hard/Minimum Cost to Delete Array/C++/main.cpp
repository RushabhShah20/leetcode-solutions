// Problem: Minimum Cost to Delete Array
// Link to the problem: https://leetcode.com/problems/minimum-cost-to-delete-array/
class Solution
{
public:
    long long minCost(vector<int> &nums)
    {
        const int n = nums.size();
        int x = 0, y = 1000000001;
        long long ans = nums[0] + nums[n - 1];
        for (int i = 1; i < n - 1; i++)
        {
            if (nums[i] < 0)
            {
                ans += nums[i];
                x ^= 1;
            }
            y = min(y, abs(nums[i]));
        }
        if (x > 0)
        {
            ans += y;
        }
        return ans;
    }
};