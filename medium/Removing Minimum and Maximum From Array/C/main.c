// Problem: Removing Minimum and Maximum From Array
// Link to the problem: https://leetcode.com/problems/removing-minimum-and-maximum-from-array/
int minimumDeletions(int *nums, int numsSize)
{
    const int n = numsSize;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > nums[x])
        {
            x = i;
        }
        else if (nums[i] < nums[y])
        {
            y = i;
        }
    }
    const int a = fmax(x, y) + 1;
    const int b = n - fmin(x, y);
    const int c = (fmin(x, y) + 1) + (n - fmax(x, y));
    const int ans = fmin(a, fmin(b, c));
    return ans;
}