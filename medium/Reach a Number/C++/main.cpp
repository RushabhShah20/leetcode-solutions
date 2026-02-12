// Problem: Reach a Number
// Link to the problem: https://leetcode.com/problems/reach-a-number/
class Solution
{
public:
    int reachNumber(int target)
    {
        int ans = ceil(sqrt(2 * abs(target) + 0.25) - 0.5);
        if (target % 2 == 0)
        {
            if (ans % 4 == 1)
            {
                ans += 2;
            }
            if (ans % 4 == 2)
            {
                ans += 1;
            }
        }
        else
        {
            if (ans % 4 == 3)
            {
                ans += 2;
            }
            if (ans % 4 == 0)
            {
                ans += 1;
            }
        }
        return ans;
    }
};