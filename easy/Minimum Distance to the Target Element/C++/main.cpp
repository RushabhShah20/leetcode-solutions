// Problem: Minimum Distance to the Target Element
// Link to the problem: https://leetcode.com/problems/minimum-distance-to-the-target-element/
class Solution
{
public:
    int getMinDistance(vector<int> &nums, int target, int start)
    {
        int ans = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                ans = min(abs(i - start), ans);
            }
        }
        return ans;
    }
};