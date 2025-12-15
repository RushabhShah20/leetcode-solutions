// Problem: Partition Array Such That Maximum Difference Is K
// Link to the problem: https://leetcode.com/problems/partition-array-such-that-maximum-difference-is-k/
class Solution
{
public:
    int partitionArray(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        int ans = 1, n = nums.size(), minVal = nums[0];
        for (int i = 1; i < n; i++)
        {
            if (nums[i] - minVal > k)
            {
                ans++;
                minVal = nums[i];
            }
        }
        return ans;
    }
};