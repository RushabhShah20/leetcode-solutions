// Problem: Binary Gap
// Link to the problem: https://leetcode.com/problems/binary-gap/
int binaryGap(int n)
{
    int ans = 0, x = 0, y = -1;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            if (y != -1)
            {
                ans = fmax(ans, x - y);
            }
            y = x;
        }
        n /= 2;
        x++;
    }
    return ans;
}