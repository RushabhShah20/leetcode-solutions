// Problem: Max Consecutive Ones
// Link to the problem: https://leetcode.com/problems/max-consecutive-ones/
int findMaxConsecutiveOnes(int *nums, int numsSize)
{
    int ans = 0, count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == 1)
        {
            count++;
            ans = fmax(ans, count);
        }
        else
        {
            count = 0;
        }
    }
    return ans;
}