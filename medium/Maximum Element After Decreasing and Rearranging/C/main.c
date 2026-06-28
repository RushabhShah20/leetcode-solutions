// Problem: Maximum Element After Decreasing and Rearranging
// Link to the problem: https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/
int comp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int maximumElementAfterDecrementingAndRearranging(int *arr, int arrSize)
{
    qsort(arr, arrSize, sizeof(arr[0]), comp);
    const int n = arrSize;
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= ans + 1)
        {
            ans++;
        }
    }
    return ans;
}