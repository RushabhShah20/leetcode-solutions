// Problem: Maximize Sum of Squares of Digits
// Link to the problem: https://leetcode.com/problems/maximize-sum-of-squares-of-digits/
class Solution
{
public:
    string maxSumOfSquares(int num, int sum)
    {
        string ans;
        while (sum > 0)
        {
            if (sum > 9)
            {
                sum -= 9;
                ans.append(1, '9');
            }
            else
            {
                ans.append(1, sum + '0');
                sum = 0;
            }
        }
        if (ans.length() > num)
        {
            return "";
        }
        else
        {
            ans.append(num - ans.size(), '0');
            return ans;
        }
    }
};