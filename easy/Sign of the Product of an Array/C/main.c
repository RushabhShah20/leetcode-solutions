// Problem: Sign of the Product of an Array
// Link to the problem: https://leetcode.com/problems/sign-of-the-product-of-an-array/
int arraySign(int *nums, int numsSize)
{
    int sign = 1;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == 0)
            return 0;
        else if (nums[i] < 0)
            sign *= -1;
    }
    return sign;
}