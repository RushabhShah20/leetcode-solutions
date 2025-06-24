// Problem: Plus One
// Link to the problem: https://leetcode.com/problems/plus-one/
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int carry = 0;
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (i == digits.size() - 1)
            {
                int x = digits[i];
                digits[i] = (digits[i] + 1) % 10;
                carry = (x + 1) / 10;
            }
            else
            {
                int x = digits[i];
                digits[i] = (digits[i] + carry) % 10;
                carry = (x + carry) / 10;
            }
        }
        if (carry == 1)
        {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};