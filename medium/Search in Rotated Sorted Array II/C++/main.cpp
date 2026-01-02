// Problem: Search in Rotated Sorted Array
// Link to the problem: https://leetcode.com/problems/search-in-rotated-sorted-array/
class Solution
{
public:
    bool search(vector<int> &nums, int target)
    {
        const int n = nums.size();
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (nums[m] == target)
            {
                return true;
            }
            if (nums[l] == nums[m] && nums[m] == nums[r])
            {
                l++;
                r--;
            }
            else if (nums[m] >= nums[l])
            {
                if (nums[l] <= target && target <= nums[m])
                {
                    r = m - 1;
                }
                else
                {
                    l = m + 1;
                }
            }
            else
            {
                if (nums[m] <= target && nums[r] >= target)
                {
                    l = m + 1;
                }
                else
                {
                    r = m - 1;
                }
            }
        }
        return false;
    }
};