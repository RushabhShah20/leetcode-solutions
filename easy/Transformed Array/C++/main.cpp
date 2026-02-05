// Problem: Transformed Array
// Link to the problem: https://leetcode.com/problems/transformed-array/
class Solution
{
public:
    vector<int> constructTransformedArray(vector<int> &nums)
    {
        const int n = nums.size();
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[i] = nums[(i + nums[i] % n + n) % n];
        }
        return ans;
    }
};