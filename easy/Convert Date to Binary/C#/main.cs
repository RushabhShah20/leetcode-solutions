// Problem: Convert Date to Binary
// Link to the problem: https://leetcode.com/problems/convert-date-to-binary/
public class Solution
{
    public long toBinary(long n)
    {
        long ans = 0;
        long i = 1;
        while (n > 0)
        {
            long rem = n % 2;
            ans += rem * i;
            n /= 2;
            i *= 10;
        }
        return ans;
    }
    public string ConvertDateToBinary(string date)
    {
        string yyyy = date.Substring(0, 4);
        string mm = date.Substring(5, 2);
        string dd = date.Substring(8, 2);
        long y = toBinary(long.Parse(yyyy));
        long m = toBinary(long.Parse(mm));
        long d = toBinary(long.Parse(dd));
        string ans = y.ToString() + "-" + m.ToString() + "-" + d.ToString();
        return ans;
    }
}