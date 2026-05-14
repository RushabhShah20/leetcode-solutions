// Problem: Check if Array is Good
// Link to the problem: https://leetcode.com/problems/check-if-array-is-good/
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
bool isGood(int *nums, int numsSize)
{
    const int n = numsSize;
    if (n == 1)
    {
        return false;
    }
    qsort(nums, n, sizeof(int), compare);
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] != i + 1)
        {
            return false;
        }
    }
    if (nums[n - 1] != n - 1)
    {
        return false;
    }
    return true;
}