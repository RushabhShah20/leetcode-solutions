// Problem: Search Insert Position
// Link to the problem: https://leetcode.com/problems/search-insert-position/
int searchInsert(int *nums, int numsSize, int target)
{
    const int n = numsSize;
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