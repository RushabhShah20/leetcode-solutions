// Problem: Minimum Moves to Equal Array Elements
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements/
class Solution
{
public:
    int minMoves(vector<int> &nums)
    {
        const int n = nums.size();
        int ans = 0, mn = 1000000001;
        for (int i = 0; i < n; i++)
        {
            mn = min(mn, nums[i]);
        }
        for (int i = 0; i < n; i++)
        {
            ans += nums[i] - mn;
        }
        return ans;
    }
};