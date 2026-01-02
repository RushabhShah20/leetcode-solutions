// Problem: Find First and Last Position of Element in Sorted Array
// Link to the problem: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        const int n = nums.size();
        vector<int> ans(2, -1);
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (nums[m] == target)
            {
                ans[0] = m;
            }
            if (nums[m] >= target)
            {
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        l = 0;
        r = n - 1;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (nums[m] == target)
            {
                ans[1] = m;
            }
            if (nums[m] <= target)
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        return ans;
    }
};