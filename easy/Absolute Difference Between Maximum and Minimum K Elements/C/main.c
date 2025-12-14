// Problem: Absolute Difference Between Maximum and Minimum K Elements
// Link to the problem: https://leetcode.com/problems/absolute-difference-between-maximum-and-minimum-k-elements/
int comp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int absDifference(int *nums, int numsSize, int k)
{
    qsort(nums, numsSize, sizeof(nums[0]), comp);
    int ans = 0, n = numsSize;
    for (int i = 0; i < k; i++)
    {
        ans += (-nums[i] + nums[n - i - 1]);
    }
    return ans;
}