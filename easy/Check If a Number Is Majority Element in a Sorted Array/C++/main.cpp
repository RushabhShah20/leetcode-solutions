// Problem: Check If a Number Is Majority Element in a Sorted Array
// Link to the problem: https://leetcode.com/problems/check-if-a-number-is-majority-element-in-a-sorted-array/
class Solution
{
public:
    bool isMajorityElement(vector<int> &nums, int target)
    {
        const int n = nums.size();
        int x = -1, y = -1;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            const int m = l + (r - l) / 2;
            if (nums[m] <= target)
            {
                x = m;
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        l = 0;
        r = n - 1;
        while (l <= r)
        {
            const int m = l + (r - l) / 2;
            if (nums[m] >= target)
            {
                y = m;
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        if (x == -1 || y == -1)
        {
            return false;
        }
        const bool ans = (x - y + 1) > (n / 2);
        return ans;
    }
};