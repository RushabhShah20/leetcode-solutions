// Problem: Arranging Coins
// Link to the problem: https://leetcode.com/problems/arranging-coins/
public class Solution
{
    public int ArrangeCoins(int n)
    {
        int low = 0, high = n;
        int ans = 0;
        while (low <= high)
        {
            long mid = low + (high - low) / 2;
            long sum = mid * (mid + 1) / 2;
            if (sum == n)
            {
                return (int)mid;
            }
            else if (sum < n)
            {
                ans = (int)mid;
                low = (int)(mid + 1);
            }
            else
            {
                high = (int)(mid - 1);
            }
        }
        return ans;
    }
}