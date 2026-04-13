// Problem: Minimum Distance to the Target Element
// Link to the problem: https://leetcode.com/problems/minimum-distance-to-the-target-element/
int getMinDistance(int *nums, int numsSize, int target, int start)
{
    const int n = numsSize;
    int ans = 1000000000;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            ans = fmin(abs(i - start), ans);
        }
    }
    return ans;
}