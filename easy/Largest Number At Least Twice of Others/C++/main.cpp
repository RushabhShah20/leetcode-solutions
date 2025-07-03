// Problem: Largest Number At Least Twice of Others
// Link to the problem: https://leetcode.com/problems/largest-number-at-least-twice-of-others/
class Solution
{
public:
    int dominantIndex(vector<int> &nums)
    {
        int ans = *max_element(nums.begin(), nums.end()), x = max_element(nums.begin(), nums.end()) - nums.begin();
        for (int i = 0; i < nums.size(); i++)
        {
            if ((ans < (2 * nums[i])) && i != x)
            {
                return -1;
            }
        }
        return x;
    }
};