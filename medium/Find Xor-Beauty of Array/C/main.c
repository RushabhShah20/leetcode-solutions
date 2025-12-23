// Problem: Find Xor-Beauty of Array
// Link to the problem: https://leetcode.com/problems/find-xor-beauty-of-array/
int xorBeauty(int *nums, int numsSize)
{
    int ans = 0;
    for (int i = 0; i < numsSize; i++)
    {
        ans ^= nums[i];
    }
    return ans;
}