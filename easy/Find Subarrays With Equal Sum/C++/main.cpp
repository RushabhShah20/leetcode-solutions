// Problem: Find Subarrays With Equal Sum
// Link to the problem: https://leetcode.com/problems/find-subarrays-with-equal-sum/
class Solution
{
public:
    bool findSubarrays(vector<int> &nums)
    {
        vector<int> sum(nums.size() - 1);
        for (int i = 0; i < nums.size() - 1; i++)
        {
            sum[i] = (nums[i] + nums[i + 1]);
        }
        set<int> s(sum.begin(), sum.end());
        if (s.size() == sum.size())
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};