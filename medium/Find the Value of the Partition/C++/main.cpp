// Problem: Find the Value of the Partition
// Link to the problem: https://leetcode.com/problems/find-the-value-of-the-partition/
class Solution
{
public:
    int findValueOfPartition(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int ans = 1000000000, n = nums.size();
        for (int i = 0; i < n - 1; i++)
        {
            ans = min(ans, nums[i + 1] - nums[i]);
        }
        return ans;
    }
};