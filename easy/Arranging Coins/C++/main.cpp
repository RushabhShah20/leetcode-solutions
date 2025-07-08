// Problem: Arranging Coins
// Link to the problem: https://leetcode.com/problems/arranging-coins/
class Solution
{
public:
    int arrangeCoins(int n)
    {
        int low = 0, high = n;
        int ans = 0;
        while (low <= high)
        {
            long long mid = low + (high - low) / 2;
            long long sum = mid * (mid + 1) / 2;
            if (sum == n)
            {
                return mid;
            }
            else if (sum < n)
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return ans;
    }
};