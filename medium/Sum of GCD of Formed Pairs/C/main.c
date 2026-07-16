// Problem: Sum of GCD of Formed Pairs
// Link to the problem: https://leetcode.com/problems/sum-of-gcd-of-formed-pairs/
int comp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int gcd(const int a, const int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
long long gcdSum(int *nums, int numsSize)
{
    const int n = numsSize;
    int mx = 0;
    int *a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        mx = fmax(mx, nums[i]);
        a[i] = gcd(mx, nums[i]);
    }
    long long ans = 0;
    qsort(a, n, sizeof(a[0]), comp);
    int l = 0, r = n - 1;
    while (l < r)
    {
        ans += gcd(a[l], a[r]);
        l++;
        r--;
    }
    return ans;
}