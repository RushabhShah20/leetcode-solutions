// Problem: Number of Arithmetic Triplets
// Link to the problem: https://leetcode.com/problems/number-of-arithmetic-triplets/
class Solution
{
public:
    bool binarySearch(vector<int> &nums, int target)
    {
        int l = 0, r = nums.size() - 1;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (nums[m] == target)
            {
                return true;
            }
            else if (nums[m] < target)
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        return false;
    }
    int arithmeticTriplets(vector<int> &nums, int diff)
    {
        const int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (binarySearch(nums, nums[i] + diff) && binarySearch(nums, nums[i] + (2 * diff)))
            {
                ans++;
            }
        }
        return ans;
    }
};