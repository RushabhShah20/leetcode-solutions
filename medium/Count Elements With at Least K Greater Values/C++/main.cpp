// Problem: Count Elements With at Least K Greater Values
// Link to the problem: https://leetcode.com/problems/count-elements-with-at-least-k-greater-values/
class Solution
{
public:
    int countElements(vector<int> &nums, int k)
    {
        int n = nums.size();
        if (k == 0)
        {
            return n;
        }
        sort(nums.begin(), nums.end());
        int ans = 0, x = nums[n - k];
        for (const int num : nums)
        {
            if (num < x)
            {
                ans++;
            }
        }
        return ans;
    }
};