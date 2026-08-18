// Problem: Find the Largest Almost Missing Integer
// Link to the problem: https://leetcode.com/problems/find-the-largest-almost-missing-integer/
int largestInteger(int *nums, int numsSize, int k)
{
    const int n = numsSize;
    int ans = -1;
    if (n == k)
    {
        for (int i = 0; i < n; i++)
        {
            ans = fmax(ans, nums[i]);
        }
        return ans;
    }
    int a[51];
    for (int i = 0; i <= 50; i++)
    {
        a[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        a[nums[i]]++;
    }
    if (k == 1)
    {
        for (int i = 50; i >= 0; i--)
        {
            if (a[i] == 1)
            {
                return i;
            }
        }
        return -1;
    }
    if (a[nums[0]] == 1)
    {
        ans = fmax(ans, nums[0]);
    }
    if (a[nums[n - 1]] == 1)
    {
        ans = fmax(ans, nums[n - 1]);
    }
    return ans;
}