// Problem: Maximize Sum of Squares of Digits
// Link to the problem: https://leetcode.com/problems/maximize-sum-of-squares-of-digits/
public class Solution
{
    public string MaxSumOfSquares(int num, int sum)
    {
        if (sum < 1 || sum > 9 * num)
        {
            return "";
        }
        StringBuilder ans = new StringBuilder();
        int x = sum / 9, y = sum % 9;
        ans.Append('9', x);
        num -= x;
        if (y > 0)
        {
            ans.Append((char)(y + '0'));
            num--;
        }
        ans.Append('0', num);
        return ans.ToString();
    }
}