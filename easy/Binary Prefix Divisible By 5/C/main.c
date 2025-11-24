// Problem: Binary Prefix Divisible By 5
// Link to the problem: https://leetcode.com/problems/binary-prefix-divisible-by-5/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool *prefixesDivBy5(int *nums, int numsSize, int *returnSize)
{
    *returnSize = numsSize;
    bool *ans = (bool *)malloc(numsSize * sizeof(bool));
    int rem = 0;
    for (int i = 0; i < numsSize; i++)
    {
        rem = (2 * rem + nums[i]) % 5;
        if (rem == 0)
        {
            ans[i] = true;
        }
        else
        {
            ans[i] = false;
        }
    }
    return ans;
}