// Problem: Maximum Ascending Subarray Sum
// Link to the problem: https://leetcode.com/problems/maximum-ascending-subarray-sum/
int maxAscendingSum(int *nums, int numsSize)
{
    int ans = 0, sum = nums[0];
    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] > nums[i - 1])
        {
            sum += nums[i];
        }
        else
        {
            ans = fmax(ans, sum);
            sum = nums[i];
        }
    }
    ans = fmax(ans, sum);
    return ans;
}