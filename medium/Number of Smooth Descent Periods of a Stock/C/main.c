// Problem: Number of Smooth Descent Periods of a Stock
// Link to the problem: https://leetcode.com/problems/number-of-smooth-descent-periods-of-a-stock/
long long getDescentPeriods(int *prices, int pricesSize)
{
    long long ans = 0, count = 1;
    int *a = (int *)malloc(pricesSize * sizeof(int));
    int aSize = 0;
    for (int i = 1; i < pricesSize; i++)
    {
        if (prices[i] == prices[i - 1] - 1)
        {
            count++;
        }
        else
        {
            a[aSize++] = count;
            count = 1;
        }
    }
    a[aSize++] = count;
    for (int i = 0; i < aSize; i++)
    {
        ans += ((long long)(a[i]) * (long long)(a[i] + 1) / 2);
    }
    free(a);
    return ans;
}