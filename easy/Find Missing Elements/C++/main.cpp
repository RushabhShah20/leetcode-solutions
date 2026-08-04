// Problem: Find Missing Elements
// Link to the problem: https://leetcode.com/problems/find-missing-elements/
class Solution
{
public:
    vector<int> findMissingElements(vector<int> &nums)
    {
        const int n = nums.size();
        int mn = 101, mx = 1;
        for (int i = 0; i < n; i++)
        {
            mn = min(mn, nums[i]);
            mx = max(mx, nums[i]);
        }
        const int m = mx - mn + 1;
        vector<int> a(m);
        for (int i = 0; i < n; i++)
        {
            a[nums[i] - mn]++;
        }
        vector<int> ans;
        for (int i = 0; i < m; i++)
        {
            if (a[i] == 0)
            {
                ans.push_back(i + mn);
            }
        }
        return ans;
    }
};