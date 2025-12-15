// Problem: Find the Value of the Partition
// Link to the problem: https://leetcode.com/problems/find-the-value-of-the-partition/
int comp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int findValueOfPartition(int *nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(nums[0]), comp);
    int ans = 1000000000, n = numsSize;
    for (int i = 0; i < n - 1; i++)
    {
        ans = fmin(ans, nums[i + 1] - nums[i]);
    }
    return ans;
}