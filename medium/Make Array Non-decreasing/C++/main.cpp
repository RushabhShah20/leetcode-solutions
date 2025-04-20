// Problem: Make Array Non-decreasing
// Link to the problem: https://leetcode.com/problems/make-array-non-decreasing/
class Solution
{
public:
    int maximumPossibleSize(vector<int> &nums)
    {
        int ans = 0;
        int max = INT64_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= max)
            {
                max = nums[i];
                ans++;
            }
        }
        return ans;
    }
};