// Problem: Smallest Range I
// Link to the problem: https://leetcode.com/problems/smallest-range-i/
class Solution
{
public:
    int smallestRangeI(vector<int> &nums, int k)
    {
        int x = *max_element(nums.begin(), nums.end()), y = *min_element(nums.begin(), nums.end());
        if (x - y - (2 * k) > 0)
        {
            return x - y - (2 * k);
        }
        else
        {
            return 0;
        }
    }
};