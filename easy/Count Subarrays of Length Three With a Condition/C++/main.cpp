// Problem: Count Subarrays of Length Three With a Condition
// Link to the problem: https://leetcode.com/problems/count-subarrays-of-length-three-with-a-condition/
class Solution
{
public:
    int countSubarrays(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size() - 2; i++)
        {
            if (((nums[i] + nums[i + 2]) * 2) == (nums[i + 1]))
            {
                ans++;
            }
        }
        return ans;
    }
};