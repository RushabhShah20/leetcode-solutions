// Problem: Find the Sum of Encrypted Integers
// Link to the problem: https://leetcode.com/problems/find-the-sum-of-encrypted-integers/
int maxDigitOfNum(int num)
{
    int maxDigit = 0;
    while (num > 0)
    {
        maxDigit = fmax(maxDigit, num % 10);
        num /= 10;
    }
    return maxDigit;
}
int numofDigits(int num)
{
    int count = 0;
    while (num > 0)
    {
        count++;
        num /= 10;
    }
    return count;
}
int encrypt(int num)
{
    int maxDigit = maxDigitOfNum(num);
    int numDigits = numofDigits(num);
    int ans = 0;
    for (int i = 1; i <= numDigits; i++)
    {
        ans += maxDigit * pow(10, i - 1);
    }
    return ans;
}
int sumOfEncryptedInt(int *nums, int numsSize)
{
    int ans = 0;
    for (int i = 0; i < numsSize; i++)
    {
        nums[i] = encrypt(nums[i]);
        ans += nums[i];
    }
    return ans;
}