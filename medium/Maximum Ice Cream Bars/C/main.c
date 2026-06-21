// Problem: Maximum Ice Cream Bars
// Link to the problem: https://leetcode.com/problems/maximum-ice-cream-bars/
int maxIceCream(int *costs, int costsSize, int coins)
{
    const int n = costsSize;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        mx = fmax(mx, costs[i]);
    }
    int a[mx + 1];
    for (int i = 1; i <= mx; i++)
    {
        a[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        a[costs[i]]++;
    }
    int ans = 0;
    for (int i = 1; i <= mx; i++)
    {
        if (a[i] == 0)
        {
            continue;
        }
        if (coins < i)
        {
            break;
        }
        const int x = fmin(a[i], coins / i);
        coins -= i * x;
        ans += x;
    }
    return ans;
}