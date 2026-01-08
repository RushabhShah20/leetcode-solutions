// Problem: Find Greatest Common Divisor of Array
// Link to the problem: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int findGCD(int *nums, int numsSize)
{
    int maxVal = 0, minVal = 1001;
    for (int i = 0; i < numsSize; i++)
    {
        maxVal = fmax(maxVal, nums[i]);
        minVal = fmin(minVal, nums[i]);
    }
    const int ans = gcd(maxVal, minVal);
    return ans;
}