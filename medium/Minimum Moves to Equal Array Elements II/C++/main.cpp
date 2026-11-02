// Problem: Minimum Moves to Equal Array Elements II
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
class Solution
{
public:
    int minMoves2(vector<int> &nums)
    {
        const int n = nums.size();
        int ans = 0, l = 0, r = n - 1;
        sort(nums.begin(), nums.end());
        while (l <= r)
        {
            ans += nums[r] - nums[l];
            l++;
            r--;
        }
        return ans;
    }
};