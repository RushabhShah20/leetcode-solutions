// Problem: Count Subarrays With Majority Element II
// Link to the problem: https://leetcode.com/problems/count-subarrays-with-majority-element-ii/
long long countMajoritySubarrays(int *nums, int numsSize, int target)
{
    const int n = numsSize;
    int pre[2 * n + 1];
    for (int i = 0; i < 2 * n + 1; i++)
    {
        pre[i] = 0;
    }
    pre[n] = 1;
    int x = n;
    long long ans = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            y += pre[x];
            x++;
            pre[x]++;
        }
        else
        {
            x--;
            y -= pre[x];
            pre[x]++;
        }
        ans += y;
    }
    return ans;
}