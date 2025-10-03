// Problem: Check if Array is Good
// Link to the problem: https://leetcode.com/problems/check-if-array-is-good/
class Solution
{
public:
    bool isGood(vector<int> &nums)
    {
        if (nums.size() == 1)
        {
            return false;
        }
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] != i + 1)
            {
                return false;
            }
        }
        if (nums.back() != n - 1)
        {
            return false;
        }
        return true;
    }
};