// Problem: Binary Gap
// Link to the problem: https://leetcode.com/problems/binary-gap/
public class Solution
{
    public int BinaryGap(int n)
    {
        int ans = 0, x = 0, y = -1;
        while (n > 0)
        {
            if (n % 2 == 1)
            {
                if (y != -1)
                {
                    ans = Math.Max(ans, x - y);
                }
                y = x;
            }
            n /= 2;
            x++;
        }
        return ans;
    }
}