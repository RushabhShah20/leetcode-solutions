// Problem: Minimum Operations to Make Binary Array Elements Equal to One II
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-ii/
int minOperations(int *nums, int numsSize)
{
    int ans = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (ans % 2 == 0)
        {
            if (nums[i] == 0)
            {
                ans++;
            }
        }
        else
        {
            if (nums[i] == 1)
            {
                ans++;
            }
        }
    }
    return ans;
}