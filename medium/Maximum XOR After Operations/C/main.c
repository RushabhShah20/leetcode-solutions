// Problem: Maximum XOR After Operations
// Link to the problem: https://leetcode.com/problems/maximum-xor-after-operations/
int maximumXOR(int *nums, int numsSize)
{
    int ans = 0;
    for (int i = 0; i < numsSize; i++)
    {
        ans |= nums[i];
    }
    return ans;
}