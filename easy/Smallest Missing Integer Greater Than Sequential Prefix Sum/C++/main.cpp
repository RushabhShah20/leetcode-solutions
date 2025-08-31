// Problem: Smallest Missing Integer Greater Than Sequential Prefix Sum
// Link to the problem: https://leetcode.com/problems/smallest-missing-integer-greater-than-sequential-prefix-sum/
class Solution
{
public:
    int missingInteger(vector<int> &nums)
    {
        int ans = 0, prefixSum = nums[0], index = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1] + 1)
            {
                prefixSum += nums[i];
                index = i;
            }
            else
            {
                break;
            }
        }
        ans = prefixSum;
        while (find(nums.begin() + index, nums.end(), ans) != nums.end())
        {
            ans++;
        }
        return ans;
    }
};