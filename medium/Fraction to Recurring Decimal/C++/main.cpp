// Problem: Fraction to Recurring Decimal
// Link to the problem: https://leetcode.com/problems/fraction-to-recurring-decimal/
class Solution
{
public:
    string fractionToDecimal(int numerator, int denominator)
    {
        if (numerator == 0)
        {
            return "0";
        }
        string ans = "";
        if (numerator < 0 ^ denominator < 0)
        {
            ans.push_back('-');
        }
        long num = labs((long)(numerator));
        long den = labs((long)(denominator));
        ans += to_string(num / den);
        long r = num % den;
        if (r == 0)
        {
            return ans;
        }
        ans.push_back('.');
        unordered_map<long, int> x;
        while (r != 0)
        {
            if (x.count(r))
            {
                ans.insert(x[r], "(");
                ans.push_back(')');
                return ans;
            }
            x[r] = ans.size();
            r *= 10;
            ans += to_string(r / den);
            r %= den;
        }
        return ans;
    }
};