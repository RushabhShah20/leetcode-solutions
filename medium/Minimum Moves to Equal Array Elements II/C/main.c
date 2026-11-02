// Problem: Minimum Moves to Equal Array Elements II
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
int comp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int minMoves2(int *nums, int numsSize)
{
    const int n = numsSize;
    int ans = 0, l = 0, r = n - 1;
    qsort(nums, numsSize, sizeof(nums[0]), comp);
    while (l <= r)
    {
        ans += nums[r] - nums[l];
        l++;
        r--;
    }
    return ans;
}