// Problem: Mirror Distance of an Integer
// Link to the problem: https://leetcode.com/problems/mirror-distance-of-an-integer/
public class Solution
{
    public int rev(int n)
    {
        int ans = 0;
        while (n > 0)
        {
            ans = ans * 10 + n % 10;
            n /= 10;
        }
        return ans;
    }
    public int MirrorDistance(int n)
    {
        int m = rev(n), ans = Math.Abs(m - n);
        return ans;
    }
}