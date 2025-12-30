// Problem: K Radius Subarray Averages
// Link to the problem: https://leetcode.com/problems/k-radius-subarray-averages/
class Solution
{
public:
    vector<int> getAverages(vector<int> &nums, int k)
    {
        const int n = nums.size(), m = (2 * k) + 1;
        vector<int> ans(n, -1);
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i >= m)
            {
                sum += nums[i];
                sum -= nums[i - m];
            }
            else
            {
                sum += nums[i];
            }
            if (i >= m - 1)
            {
                ans[i - k] = (sum / m);
            }
        }
        return ans;
    }
};