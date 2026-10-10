// Problem: Minimum Sum of Squared Difference
// Link to the problem: https://leetcode.com/problems/minimum-sum-of-squared-difference/
int comp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
long long minSumSquareDiff(int *nums1, int nums1Size, int *nums2, int nums2Size, int k1, int k2)
{
    const int n = nums1Size;
    long long ans = 0;
    int k = k1 + k2, x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        nums1[i] = abs(nums1[i] - nums2[i]);
        x = fmax(x, nums1[i]);
    }
    int l = 0, r = x;
    while (l <= r)
    {
        const int m = (l + r) >> 1;
        long long a = 0;
        for (int i = 0; i < n; i++)
        {
            a += nums1[i] > m ? nums1[i] - m : 0;
        }
        const bool z = a <= k;
        if (z)
        {
            y = m;
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (nums1[i] > y)
        {
            k -= nums1[i] - y;
        }
    }
    qsort(nums1, nums1Size, sizeof(nums1[0]), comp);
    for (int i = n - 1; i >= 0; i--)
    {
        long long b = fmin(y, nums1[i]);
        if (k > 0 && b > 0)
        {
            k--;
            b--;
        }
        ans += b * b;
    }
    return ans;
}