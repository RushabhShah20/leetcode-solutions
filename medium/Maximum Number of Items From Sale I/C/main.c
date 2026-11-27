// Problem: Maximum Number of Items From Sale I
// Link to the problem: https://leetcode.com/problems/maximum-number-of-items-from-sale-i/
int maximumSaleItems(int **items, int itemsSize, int *itemsColSize, int budget)
{
    const int n = itemsSize;
    int a[budget + 1];
    for (int i = 0; i <= budget; i++)
    {
        a[i] = 0;
    }
    int x = 1000000000;
    for (int i = 0; i < n; i++)
    {
        const int y = items[i][0], z = items[i][1];
        x = fmin(x, z);
        int b = 0;
        for (int j = 0; j < n; j++)
        {
            if (items[j][0] % y == 0)
            {
                b++;
            }
        }
        for (int j = budget; j >= z; j--)
        {
            a[j] = fmax(a[j], a[j - z] + b);
        }
    }
    int ans = 0;
    for (int i = 0; i <= budget; i++)
    {
        ans = fmax(ans, a[i] + (budget - i) / x);
    }
    return ans;
}