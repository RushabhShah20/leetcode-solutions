// Problem: Minimize Maximum Pair Sum in Array
// Link to the problem: https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/
int comp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int minPairSum(int *nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(nums[0]), comp);
    int l = 0, r = numsSize - 1, ans = 0;
    while (l < r)
    {
        ans = fmax(ans, nums[l] + nums[r]);
        l++;
        r--;
    }
    return ans;
}