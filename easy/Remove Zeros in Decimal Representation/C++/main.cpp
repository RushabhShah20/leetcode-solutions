// Problem: Remove Zeros in Decimal Representation
// Link to the problem: https://leetcode.com/problems/remove-zeros-in-decimal-representation/
class Solution
{
public:
    long long removeZeros(long long n)
    {
        string x = to_string(n);
        for (int i = x.size() - 1; i >= 0; i--)
        {
            if (x[i] == '0')
            {
                x.erase(i, 1);
            }
        }
        long long ans = stoll(x);
        return ans;
    }
};