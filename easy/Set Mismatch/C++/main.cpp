// Problem: Set Mismatch
// Link to the problem: https://leetcode.com/problems/set-mismatch/
class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        vector<int> freq(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++)
        {
            freq[nums[i] - 1]++;
        }
        vector<int> ans(2, 0);
        for (int i = 0; i < freq.size(); i++)
        {
            if (freq[i] == 2)
            {
                ans[0] = i + 1;
            }
            if (freq[i] == 0)
            {
                ans[1] = i + 1;
            }
        }
        return ans;
    }
};