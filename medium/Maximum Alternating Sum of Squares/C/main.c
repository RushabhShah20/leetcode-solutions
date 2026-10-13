// Problem: Maximum Alternating Sum of Squares
// Link to the problem: https://leetcode.com/problems/maximum-alternating-sum-of-squares/
int comp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
long long maxAlternatingSum(int *nums, int numsSize)
{
    const int n = numsSize;
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        nums[i] *= nums[i];
    }
    qsort(nums, numsSize, sizeof(nums[0]), comp);
    for (int i = 0; i < n; i++)
    {
        if (i < (n >> 1))
        {
            ans -= nums[i];
        }
        else
        {
            ans += nums[i];
        }
    }
    return ans;
}