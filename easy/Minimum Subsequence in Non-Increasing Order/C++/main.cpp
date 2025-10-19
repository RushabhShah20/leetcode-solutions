// Problem: Minimum Subsequence in Non-Increasing Order
// Link to the problem: https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order/
class Solution
{
public:
    vector<int> minSubsequence(vector<int> &nums)
    {
        sort(nums.begin(), nums.end(), greater<int>());
        int sum = 0;
        for (int num : nums)
        {
            sum += num;
        }
        int a = 0;
        vector<int> ans;
        for (int num : nums)
        {
            a += num;
            if (a > sum - a)
            {
                ans.push_back(num);
                break;
            }
            else
            {
                ans.push_back(num);
            }
        }
        return ans;
    }
};