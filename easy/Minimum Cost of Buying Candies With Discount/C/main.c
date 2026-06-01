// Problem: Minimum Cost of Buying Candies With Discount
// Link to the problem: https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/
int comp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int minimumCost(int *cost, int costSize)
{
    const int n = costSize;
    int ans = 0;
    qsort(cost, costSize, sizeof(cost[0]), comp);
    for (int i = n - 1; i >= 0; i -= 3)
    {
        if (i - 1 >= 0)
        {
            ans += cost[i] + cost[i - 1];
        }
        else
        {
            ans += cost[i];
        }
    }
    return ans;
}