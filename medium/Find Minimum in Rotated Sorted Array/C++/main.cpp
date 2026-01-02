// Problem: Find Minimum in Rotated Sorted Array
// Link to the problem: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        const int n = nums.size();
        int ans = 5001, l = 0, r = n - 1;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (nums[l] <= nums[m])
            {
                ans = min(ans, nums[l]);
                l = m + 1;
            }
            else
            {
                r = m - 1;
                ans = min(ans, nums[m]);
            }
        }
        return ans;
    }
};