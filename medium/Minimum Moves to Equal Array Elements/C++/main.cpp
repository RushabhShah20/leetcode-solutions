// Problem: Minimum Moves to Equal Array Elements
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements/
class Solution
{
public:
    int minMoves(vector<int> &nums)
    {
        const int n = nums.size();
        int ans = 0, minVal = *min_element(nums.begin(), nums.end());
        for (const int &num : nums)
        {
            ans += (num - minVal);
        }
        return ans;
    }
};