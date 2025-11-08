// Problem: Minimum Amount of Time to Fill Cups
// Link to the problem: https://leetcode.com/problems/minimum-amount-of-time-to-fill-cups/
int smallest(int a, int b, int c)
{
    if (a < b)
    {
        if (a < c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b < c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}
int fillCups(int *amount, int amountSize)
{
    int ans = 0;
    int a = amount[0], b = amount[1], c = amount[2];
    while (a > 0 || b > 0 || c > 0)
    {
        if (smallest(a, b, c) == a)
        {
            b--;
            c--;
        }
        else if (smallest(a, b, c) == b)
        {
            a--;
            c--;
        }
        else
        {
            a--;
            b--;
        }
        ans++;
    }
    return ans;
}