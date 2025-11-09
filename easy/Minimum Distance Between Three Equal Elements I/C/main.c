// Problem: Minimum Distance Between Three Equal Elements I
// Link to the problem: https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i/
int minimumDistance(int *nums, int numsSize)
{
    int n = numsSize;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (i != j && j != k && i != k)
                {
                    if (nums[i] == nums[j] && nums[j] == nums[k])
                    {
                        ans = fmin(ans, abs(i - j) + abs(j - k) + abs(k - i));
                    }
                }
            }
        }
    }
    return ((ans == INT_MAX) ? (-1) : (ans));
}