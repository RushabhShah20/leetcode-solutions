// Problem: Longest Alternating Subarray
// Link to the problem: https://leetcode.com/problems/longest-alternating-subarray/
class Solution
{
public:
    int alternatingSubarray(vector<int> &nums)
    {
        const int n = nums.size();
        int ans = -1, x = 1, y = 1;
        for (int i = 1; i < n; i++)
        {
            const int z = nums[i] - nums[i - 1];
            if (y == z)
            {
                x++;
                y *= -1;
                if (x > 1)
                {
                    ans = max(ans, x);
                }
            }
            else
            {
                x = 1;
                y = 1;
                if (z == 1)
                {
                    x = 2;
                    y = -1;
                    ans = max(ans, x);
                }
            }
        }
        return ans;
    }
};