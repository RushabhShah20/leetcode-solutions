// Problem: Maximum Average Subarray I
// Link to the problem: https://leetcode.com/problems/maximum-average-subarray-i/
class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        int ans = INT_MIN, sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i >= k)
            {
                sum += nums[i];
                sum -= nums[i - k];
            }
            else
            {
                sum += nums[i];
            }
            if (i >= k - 1)
            {
                ans = max(ans, sum);
            }
        }
        return (double)(ans) / (double)(k);
    }
};