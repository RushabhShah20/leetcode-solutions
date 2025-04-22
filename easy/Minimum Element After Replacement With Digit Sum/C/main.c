// Problem: Minimum Element After Replacement With Digit Sum
// Link to the problem: https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/
int sumofDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int findMin(int *arr, int arrSize)
{
    int min = arr[0];
    for (int i = 1; i < arrSize; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int minElement(int *nums, int numsSize)
{
    for (int i = 0; i < numsSize; i++)
    {
        nums[i] = sumofDigits(nums[i]);
    }
    return findMin(nums, numsSize);
}