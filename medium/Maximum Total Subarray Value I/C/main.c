// Problem: Maximum Total Subarray Value I
// Link to the problem: https://leetcode.com/problems/maximum-total-subarray-value-i/
long long maxTotalValue(int *nums, int numsSize, int k)
{
    long ans = 0;
    int maxELement = nums[0], minElement = nums[0];
    for (int i = 1; i < numsSize; i++)
    {
        if (maxELement < nums[i])
        {
            maxELement = nums[i];
        }
        if (minElement > nums[i])
        {
            minElement = nums[i];
        }
    }
    ans = ((long long)(maxELement - minElement) * (long long)(k));
    return ans;
}