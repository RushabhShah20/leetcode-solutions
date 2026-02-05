// Problem: Search Insert Position
// Link to the problem: https://leetcode.com/problems/search-insert-position/
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        const int n = nums.size();
        int l = 0, r = n - 1;
        while (l <= r)
        {
            const int m = (l + r) / 2;
            if (nums[m] == target)
            {
                return m;
            }
            if (nums[m] < target)
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        return l;
    }
};