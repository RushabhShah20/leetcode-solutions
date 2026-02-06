// Problem: Minimum Removals to Balance Array
// Link to the problem: https://leetcode.com/problems/minimum-removals-to-balance-array/
int comp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int minRemoval(int *nums, int numsSize, int k)
{
    qsort(nums, numsSize, sizeof(nums[0]), comp);
    const int n = numsSize;
    int i = 0, ans = 0;
    for (int j = 0; j < n; j++)
    {
        while ((long long)nums[j] > (long long)nums[i] * k)
        {
            i++;
        }
        ans = fmax(ans, j - i + 1);
    }
    ans = n - ans;
    return ans;
}