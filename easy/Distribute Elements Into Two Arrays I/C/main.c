// Problem: Distribute Elements Into Two Arrays I
// Link to the problem: https://leetcode.com/problems/distribute-elements-into-two-arrays-i/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void reverse(int *arr, int l, int r)
{
    while (l <= r)
    {
        int x = arr[l];
        arr[l] = arr[r];
        arr[r] = x;
        l++;
        r--;
    }
}
int *resultArray(int *nums, int numsSize, int *returnSize)
{
    const int n = numsSize;
    int *ans = (int *)malloc(n * sizeof(int));
    ans[0] = nums[0];
    ans[n - 1] = nums[1];
    int l = 0, r = n - 1;
    for (int i = 2; i < n; i++)
    {
        if (ans[l] > ans[r])
        {
            l++;
            ans[l] = nums[i];
        }
        else
        {
            r--;
            ans[r] = nums[i];
        }
    }
    reverse(ans, r, n - 1);
    *returnSize = n;
    return ans;
}