// Problem: Check Divisibility by Digit Sum and Product
// Link to the problem: https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/
class Solution
{
public:
    int sum(int n)
    {
        int ans = 0;
        while (n > 0)
        {
            ans += n % 10;
            n /= 10;
        }
        return ans;
    }
    int product(int n)
    {
        int ans = 1;
        while (n > 0)
        {
            ans *= (n % 10);
            n /= 10;
        }
        return ans;
    }
    bool checkDivisibility(int n)
    {
        int x = sum(n);
        int y = product(n);
        if ((n % (x + y) == 0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};