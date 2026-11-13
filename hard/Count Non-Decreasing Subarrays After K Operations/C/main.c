// Problem: Count Non-Decreasing Subarrays After K Operations
// Link to the problem: https://leetcode.com/problems/count-non-decreasing-subarrays-after-k-operations/
long long countNonDecreasingSubarrays(int *nums, int numsSize, int k)
{
    const int n = numsSize;
    long long ans = 0, x = 0;
    int st[n];
    for (int i = 0; i < n; i++)
    {
        st[i] = 0;
    }
    int a = 0, b = 0, j = n - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        while (a < b && nums[st[b - 1]] < nums[i])
        {
            b--;
            const int y = st[b], r = (a < b) ? st[b - 1] : j + 1;
            x += (long long)(r - y) * (nums[i] - nums[y]);
        }
        st[b] = i;
        b++;
        while (x > k)
        {
            x -= (long long)nums[st[a]] - nums[j];
            if (st[a] == j)
            {
                a++;
            }
            j--;
        }
        ans += j - i + 1;
    }
    return ans;
}