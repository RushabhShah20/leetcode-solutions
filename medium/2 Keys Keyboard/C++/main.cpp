// Problem: 2 Keys Keyboard
// Link to the problem: https://leetcode.com/problems/2-keys-keyboard/
class Solution
{
public:
    int minSteps(int n)
    {
        if (n == 1)
        {
            return 0;
        }
        int ans = 0;
        for (int i = 2; i <= n; i++)
        {
            while (n % i == 0)
            {
                ans += i;
                n /= i;
            }
        }
        return ans;
    }
};