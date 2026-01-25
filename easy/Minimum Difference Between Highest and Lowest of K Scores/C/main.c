// Problem: Minimum Difference Between Highest and Lowest of K Scores
// Link to the problem: https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/
int comp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int minimumDifference(int *nums, int numsSize, int k)
{
    const int n = numsSize;
    qsort(nums, numsSize, sizeof(nums[0]), comp);
    int ans = 100001;
    for (int i = 0; i < n - k + 1; i++)
    {
        ans = fmin(ans, nums[i + k - 1] - nums[i]);
    }
    return ans;
}