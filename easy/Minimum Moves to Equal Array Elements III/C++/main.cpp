// Problem: Minimum Moves to Equal Array Elements III
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/
class Solution
{
public:
    int minMoves(vector<int> &nums)
    {
        int ans = 0;
        int x = *max_element(nums.begin(), nums.end());
        for (int num : nums)
        {
            ans += (x - num);
        }
        return ans;
    }
};