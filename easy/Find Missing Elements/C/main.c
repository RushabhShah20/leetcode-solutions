// Problem: Find Missing Elements
// Link to the problem: https://leetcode.com/problems/find-missing-elements/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *findMissingElements(int *nums, int numsSize, int *returnSize)
{
    int mn = 101, mx = 1;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] < mn)
        {
            mn = nums[i];
        }
        if (nums[i] > mx)
        {
            mx = nums[i];
        }
    }
    const int m = mx - mn + 1;
    int *a = (int *)calloc(m, sizeof(int));
    for (int i = 0; i < numsSize; i++)
    {
        a[nums[i] - mn]++;
    }
    int *ans = (int *)malloc(m * sizeof(int));
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        if (a[i] == 0)
        {
            ans[k] = i + mn;
            k++;
        }
    }
    free(a);
    *returnSize = k;
    return ans;
}