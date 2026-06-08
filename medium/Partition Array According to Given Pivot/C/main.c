// Problem: Partition Array According to Given Pivot
// Link to the problem: https://leetcode.com/problems/partition-array-according-to-given-pivot/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *pivotArray(int *nums, int numsSize, int pivot, int *returnSize)
{
    int *ans = (int *)malloc(numsSize * sizeof(int));
    int *less = (int *)malloc(numsSize * sizeof(int));
    int *equal = (int *)malloc(numsSize * sizeof(int));
    int *greater = (int *)malloc(numsSize * sizeof(int));
    int lessCount = 0, equalCount = 0, greaterCount = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] < pivot)
        {
            less[lessCount++] = nums[i];
        }
        else if (nums[i] > pivot)
        {
            greater[greaterCount++] = nums[i];
        }
        else
        {
            equal[equalCount++] = nums[i];
        }
    }
    int j = 0;
    for (int i = 0; i < lessCount; i++)
    {
        ans[j++] = less[i];
    }
    for (int i = 0; i < equalCount; i++)
    {
        ans[j++] = equal[i];
    }
    for (int i = 0; i < greaterCount; i++)
    {
        ans[j++] = greater[i];
    }
    *returnSize = numsSize;
    free(less);
    free(equal);
    free(greater);
    return ans;
}