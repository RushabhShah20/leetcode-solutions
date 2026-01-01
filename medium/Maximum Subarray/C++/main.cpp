// Problem: Maximum Subarray
// Link to the problem: https://leetcode.com/problems/maximum-subarray/
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int curr = 0, ans = INT_MIN;
        for (const int &num : nums)
        {
            curr = max(num, curr + num);
            ans = max(ans, curr);
        }
        return ans;
    }
};