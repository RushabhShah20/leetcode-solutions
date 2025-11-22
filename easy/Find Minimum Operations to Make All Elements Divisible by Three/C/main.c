// Problem: Find Minimum Operations to Make All Elements Divisible by Three
// Link to the problem: https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/
int minimumOperations(int *nums, int numsSize)
{
    int ans = 0;
    for (int i = 0; i < numsSize; i++)
    {
        ans += nums[i] % 3 ? 1 : 0;
    }
    return ans;
}