// Problem: Concatenate Non-Zero Digits and Multiply by Sum I
// Link to the problem: https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/
class Solution
{
public:
    long long sumAndMultiply(int n)
    {
        long long sum = 0;
        string x;
        while (n > 0)
        {
            if (n % 10 != 0)
            {
                sum += n % 10;
                x.append(1, '0' + n % 10);
            }
            n /= 10;
        }
        reverse(x.begin(), x.end());
        if (x.empty())
        {
            return 0;
        }
        long long y = stoll(x);
        long long ans = sum * y;
        return ans;
    }
};