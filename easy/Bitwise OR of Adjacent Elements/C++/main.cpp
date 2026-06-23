// Problem: Bitwise OR of Adjacent Elements
// Link to the problem: https://leetcode.com/problems/bitwise-or-of-adjacent-elements/
class Solution
{
public:
    vector<int> orArray(vector<int> &nums)
    {
        const int n = nums.size();
        vector<int> ans(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            ans[i] = nums[i] | nums[i + 1];
        }
        return ans;
    }
};