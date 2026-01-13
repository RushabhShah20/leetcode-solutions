// Problem: Minimum Operations to Make Array Values Equal to K
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-make-array-values-equal-to-k/
class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        const int n = nums.size();
        sort(nums.begin(), nums.end());
        if (k > nums[0])
        {
            return -1;
        }
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (nums[i - 1] != nums[i])
            {
                ans++;
            }
        }
        if (k != nums[0])
        {
            ans++;
        }
        return ans;
    }
};