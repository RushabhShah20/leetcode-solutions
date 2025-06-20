// Problem: Thousand Separator
// Link to the problem: https://leetcode.com/problems/thousand-separator/
class Solution
{
public:
    string thousandSeparator(int n)
    {
        if (n == 0)
        {
            return "0";
        }
        string ans = "";
        int count = 0;
        while (n > 0)
        {
            if (count == 3)
            {
                count = 0;
                ans += '.';
            }
            ans += ((n % 10) + '0');
            count++;
            n /= 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};