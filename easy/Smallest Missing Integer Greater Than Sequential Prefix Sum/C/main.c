// Problem: Smallest Missing Integer Greater Than Sequential Prefix Sum
// Link to the problem: https://leetcode.com/problems/smallest-missing-integer-greater-than-sequential-prefix-sum/
int missingInteger(int *nums, int numsSize)
{
    const int n = numsSize;
    int m = 1;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1] + 1)
        {
            m += 1;
        }
        else
        {
            break;
        }
    }
    int ans = (nums[m - 1] + nums[0]) * m / 2;
    bool x = true;
    while (x)
    {
        x = false;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == ans)
            {
                x = true;
                ans += 1;
                break;
            }
        }
    }
    return ans;
}