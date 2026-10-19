// Problem: Find Target Indices After Sorting Array
// Link to the problem: https://leetcode.com/problems/find-target-indices-after-sorting-array/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *targetIndices(int *nums, int numsSize, int target, int *returnSize)
{
    const int n = numsSize;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < target)
        {
            x++;
        }
        else if (nums[i] == target)
        {
            y++;
        }
    }
    int *ans = (int *)malloc(y * sizeof(int));
    for (int i = 0; i < y; i++)
    {
        ans[i] = x + i;
    }
    *returnSize = y;
    return ans;
}