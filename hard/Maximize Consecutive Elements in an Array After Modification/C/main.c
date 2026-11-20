// Problem: Maximize Consecutive Elements in an Array After Modification
// Link to the problem: https://leetcode.com/problems/maximize-consecutive-elements-in-an-array-after-modification/
int comp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int maxSelectedElements(int *nums, int numsSize)
{
    const int n = numsSize;
    qsort(nums, numsSize, sizeof(nums[0]), comp);
    int a[1000001];
    for (int i = 0; i <= 1000000; i++)
    {
        a[i] = 0;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        const int x = nums[i];
        a[x + 1] = fmax(a[x + 1], a[x] + 1);
        a[x] = fmax(a[x], a[x - 1] + 1);
        ans = fmax(ans, fmax(a[x], a[x + 1]));
    }
    return ans;
}