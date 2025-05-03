// Problem: Alternating Digits Sum
// Link to the problem: https://leetcode.com/problems/alternating-digit-sum/
class Solution
{
public:
    vector<int> split(int num)
    {
        vector<int> result;
        while (num > 0)
        {
            result.push_back(num % 10);
            num /= 10;
        }
        return result;
    }
    int alternateDigitSum(int n)
    {
        int ans = 0;
        vector<int> digits = split(n);
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits.size() % 2 == 0)
            {
                if (i % 2 != 0)
                {
                    ans += digits[i];
                }
                else
                {
                    ans -= digits[i];
                }
            }
            else
            {
                if (i % 2 == 0)
                {
                    ans += digits[i];
                }
                else
                {
                    ans -= digits[i];
                }
            }
        }
        return ans;
    }
};