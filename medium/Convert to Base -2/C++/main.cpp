// Problem: Convert to Base -2
// Link to the problem: https://leetcode.com/problems/convert-to-base-2/
class Solution
{
public:
    string baseNeg2(int n)
    {
        string ans = "";
        if (n == 0)
        {
            return "0";
        }
        while (n != 0)
        {
            int rem = n % -2;
            n /= -2;
            if (rem < 0)
            {
                rem += 2;
                n += 1;
            }
            ans += (rem + '0');
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};