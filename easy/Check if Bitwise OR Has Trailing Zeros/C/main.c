// Problem: Check if Bitwise OR Has Trailing Zeros
// Link to the problem: https://leetcode.com/problems/check-if-bitwise-or-has-trailing-zeros/
bool hasTrailingZeros(int *nums, int numsSize)
{
    int count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] % 2 == 0)
        {
            count++;
        }
        if (count == 2)
        {
            return true;
        }
    }
    return false;
}