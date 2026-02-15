// Problem: House Robber V
// Link to the problem: https://leetcode.com/problems/house-robber-v/
class Solution
{
public:
    long long rob(vector<int> &nums, vector<int> &colors)
    {
        const int n = nums.size();
        if (n == 1)
        {
            return nums[0];
        }
        long long x = nums[0], y = 0;
        for (int i = 1; i < n; i++)
        {
            long long z = 0;
            if (colors[i] != colors[i - 1])
            {
                z = x + nums[i];
            }
            else
            {
                z = max(x, y + nums[i]);
            }
            y = x;
            x = z;
        }
        const long long ans = x;
        return ans;
    }
};