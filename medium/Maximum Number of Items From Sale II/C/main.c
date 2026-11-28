// Problem: Maximum Number of Items From Sale II
// Link to the problem: https://leetcode.com/problems/maximum-number-of-items-from-sale-ii/
static int cmp(const void *p, const void *q)
{
    const int *u = *(const int *const *)p;
    const int *v = *(const int *const *)q;
    return (u[1] > v[1]) - (u[1] < v[1]);
}
int maximumSaleItems(int **items, int itemsSize, int *itemsColSize, int budget)
{
    const int n = itemsSize;
    qsort(items, n, sizeof(int *), cmp);
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        if (items[i][0] > mx)
        {
            mx = items[i][0];
        }
    }
    int *a = (int *)calloc(mx + 1, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        a[items[i][0]]++;
    }
    for (int i = 1; i <= mx; i++)
    {
        if (a[i] > 0)
        {
            for (int j = i << 1; j <= mx; j += i)
            {
                a[i] += a[j];
            }
        }
    }
    const int mn = items[0][1];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        const int x = items[i][0];
        const int y = items[i][1];
        if (y - mn > mn)
        {
            break;
        }
        const int b = a[x] - 1;
        const int c = (b < budget / y) ? b : budget / y;
        ans += c << 1;
        budget -= c * y;
    }
    ans += budget / mn;
    free(a);
    return ans;
}