// Problem: Average Value of Even Numbers That Are Divisible by Three
// Link to the problem: https://leetcode.com/problems/average-value-of-even-numbers-that-are-divisible-by-three/
int averageValue(int *nums, int numsSize)
{
    int i;
    int sum = 0, s = 0;
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] % 6 == 0)
        {
            sum = sum + nums[i];
            s++;
        }
    }
    if (s == 0)
        return 0;
    else
        return sum / s;
}