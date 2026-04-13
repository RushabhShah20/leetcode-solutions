// Problem: Minimum Distance to the Target Element
// Link to the problem: https://leetcode.com/problems/minimum-distance-to-the-target-element/
class Solution
{
public:
    int getMinDistance(vector<int> &nums, int target, int start)
    {
        const int n = nums.size();
        int ans = 1000000000;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == target)
            {
                ans = min(abs(i - start), ans);
            }
        }
        return ans;
    }
};