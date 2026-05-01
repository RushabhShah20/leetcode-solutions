// Problem: Rotate Function
// Link to the problem: https://leetcode.com/problems/rotate-function/
int maxRotateFunction(int *nums, int numsSize)
{
    const int n = numsSize;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        x += nums[i];
        y += i * nums[i];
    }
    int ans = y;
    for (int i = n - 1; i >= 0; i--)
    {
        y = y + x - n * nums[i];
        ans = fmax(ans, y);
    }
    return ans;
}