// Problem: Count Partitions with Even Sum Difference
// Link to the problem: https://leetcode.com/problems/count-partitions-with-even-sum-difference/
int countPartitions(int *nums, int numsSize)
{
    int sum = 0, ans = numsSize - 1;
    for (int i = 0; i < numsSize; i++)
    {
        sum += nums[i];
    }
    if (sum % 2 == 0)
    {
        return ans;
    }
    else
    {
        return 0;
    }
}