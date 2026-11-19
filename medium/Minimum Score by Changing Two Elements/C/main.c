// Problem: Minimum Score by Changing Two Elements
// Link to the problem: https://leetcode.com/problems/minimum-score-by-changing-two-elements/
int minimizeSum(int *nums, int numsSize)
{
    const int n = numsSize;
    int mn1 = 1000000001, mn2 = 1000000001, mn3 = 1000000001, mx1 = 0, mx2 = 0, mx3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (mn1 > nums[i])
        {
            mn3 = mn2;
            mn2 = mn1;
            mn1 = nums[i];
        }
        else if (mn2 > nums[i])
        {
            mn3 = mn2;
            mn2 = nums[i];
        }
        else if (mn3 > nums[i])
        {
            mn3 = nums[i];
        }
        if (mx1 < nums[i])
        {
            mx3 = mx2;
            mx2 = mx1;
            mx1 = nums[i];
        }
        else if (mx2 < nums[i])
        {
            mx3 = mx2;
            mx2 = nums[i];
        }
        else if (mx3 < nums[i])
        {
            mx3 = nums[i];
        }
    }
    const int a = mx3 - mn1, b = mx1 - mn3, c = mx2 - mn2;
    const int ans = fmin(a, fmin(b, c));
    return ans;
}