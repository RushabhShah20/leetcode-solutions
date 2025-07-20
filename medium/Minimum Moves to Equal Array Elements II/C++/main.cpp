// Problem: Minimum Moves to Equal Array Elements II
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
class Solution
{
public:
    int minMoves2(vector<int> &nums)
    {
        int ans = 0, n = nums.size();
        nth_element(nums.begin(), nums.begin() + (n / 2), nums.end());
        int median = nums[n / 2];
        for (int i = 0; i < n; i++)
        {
            ans += abs(nums[i] - median);
        }
        return ans;
    }
};