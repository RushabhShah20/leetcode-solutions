// Problem: Maximum Difference Between Adjacent Elements in a Circular Array
// Link to the problem: https://leetcode.com/problems/maximum-difference-between-adjacent-elements-in-a-circular-array/
int maxAdjacentDistance(int *nums, int numsSize)
{
    int ans = 0;
    for (int i = 1; i < numsSize; i++)
    {
        ans = fmax(abs(nums[i] - nums[i - 1]), ans);
    }
    ans = fmax(abs(nums[numsSize - 1] - nums[0]), ans);
    return ans;
}