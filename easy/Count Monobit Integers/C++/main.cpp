// Problem: Count Monobit Integers
// Link to the problem: https://leetcode.com/problems/count-monobit-integers/
class Solution
{
public:
    int countMonobit(int n)
    {
        int ans = 1, x = 1, y = pow(2, x) - 1;
        while (y <= n)
        {
            ans++;
            x++;
            y = pow(2, x) - 1;
        }
        return ans;
    }
};