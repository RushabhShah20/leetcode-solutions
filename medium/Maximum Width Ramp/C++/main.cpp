// Problem: Maximum Width Ramp
// Link to the problem: https://leetcode.com/problems/maximum-width-ramp/
class Solution
{
public:
    int maxWidthRamp(vector<int> &nums)
    {
        int ans = 0, n = nums.size();
        stack<int> s;
        for (int i = 0; i < n; i++)
        {
            if (s.empty() || nums[i] < nums[s.top()])
            {
                s.push(i);
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            while (!s.empty() && nums[i] >= nums[s.top()])
            {
                ans = max(ans, i - s.top());
                s.pop();
            }
        }
        return ans;
    }
};