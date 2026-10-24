// Problem: Difference Between Peaks and Valleys
// Link to the problem: https://leetcode.com/problems/difference-between-peaks-and-valleys/
class Solution
{
public:
    int peakValleyDifference(vector<int> &nums)
    {
        const int n = nums.size();
        int ans = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
            {
                ans += nums[i];
            }
            if (nums[i] < nums[i - 1] && nums[i] < nums[i + 1])
            {
                ans -= nums[i];
            }
        }
        return ans;
    }
};