// Problem: Minimum Distance Between Three Equal Elements I
// Link to the problem: https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i/
int minimumDistance(int *nums, int numsSize)
{
    const int n = numsSize;
    int ans = INT_MAX;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (nums[i] == nums[j] && nums[j] == nums[k])
                {
                    ans = fmin(ans, abs(i - j) + abs(j - k) + abs(k - i));
                }
            }
        }
    }
    return ((ans == INT_MAX) ? (-1) : (ans));
}