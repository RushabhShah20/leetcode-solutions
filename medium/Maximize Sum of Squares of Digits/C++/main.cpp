// Problem: Maximize Sum of Squares of Digits
// Link to the problem: https://leetcode.com/problems/maximize-sum-of-squares-of-digits/
class Solution
{
public:
    string maxSumOfSquares(int num, int sum)
    {
        if (sum < 1 || sum > 9 * num)
        {
            return "";
        }
        string ans;
        const int x = sum / 9, y = sum % 9;
        ans.append(x, '9');
        num -= x;
        if (y > 0)
        {
            ans.append(1, y + '0');
            num--;
        }
        ans.append(num, '0');
        return ans;
    }
};